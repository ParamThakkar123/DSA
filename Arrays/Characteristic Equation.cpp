#include <bits/stdc++.h>
using namespace std;
#define N 3
 
int findTrace(int mat[N][N], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += mat[i][i];
    return sum;
}
 
int sum_of_minors(int mat[N][N], int n)
{
    return (
        (mat[2][2] * mat[1][1] - mat[2][1] * mat[1][2])
        + (mat[2][2] * mat[0][0] - mat[2][0] * mat[0][2])
        + (mat[1][1] * mat[0][0] - mat[1][0] * mat[0][1]));
}
 

void getCofactor(int mat[N][N], int temp[N][N], int p,
                 int q, int n)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {

            if (row != p && col != q) {
                temp[i][j++] = mat[row][col];

                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
 
int determinantOfMatrix(int mat[N][N], int n)
{

    int D = 0;

    if (n == 1)
        return mat[0][0];

    int temp[N][N];

    int sign = 1;

    for (int f = 0; f < n; f++) {

        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f]
             * determinantOfMatrix(temp, n - 1);

        sign = -sign;
    }
 
    return D;
}

int main()
{

    int mat[N][N]
        = { { 0, 1, 2 }, { 1, 0, -1 }, { 2, -1, 0 } };
    int trace = findTrace(mat, 3);
    int s_o_m = sum_of_minors(mat, 3);
    int det = determinantOfMatrix(mat, 3);
 
    cout << "x^3";
    if (trace != 0) {
        trace < 0 ? cout << " + " << trace * -1 << "x^2"
                  : cout << " - " << trace << "x^2";
    }
    if (s_o_m != 0) {
        s_o_m < 0 ? cout << " - " << s_o_m * -1 << "x"
                  : cout << " + " << s_o_m << "x";
    }
    if (det != 0) {
        det < 0 ? cout << " + " << det * -1
                : cout << " - " << det;
    }
 
    return 0;
}
