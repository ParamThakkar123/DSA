#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
int arr[N][N];

int findTrace(int arr[][N], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i][i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << findTrace(arr, n) << endl;
}T
