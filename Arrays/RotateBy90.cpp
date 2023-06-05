#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
int arr[N][N];

void rotateby90(int arr[][N]){
  for(int i = 0; i < N/2; i++){
    for(int j = i; j < N-i-1; j++){
      int temp = arr[i][j];
      arr[i][j] = arr[j][N-i-1];
      arr[j][N-i-1] = arr[N-i-1][N-j-1];
      arr[N-i-1][N-j-1] = arr[N-j-1][i];
      arr[N-j-1][i] = temp;
    }
  }
}
int main(){
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> arr[i][j];
    }
  }
  rotateby90(arr);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
