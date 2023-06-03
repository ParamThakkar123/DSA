#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int MissingNo(int a[], int n)
{
    int N = n + 1;
  
    int total = (N) * (N + 1) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout <<  MissingNo(arr, n) << endl;
}
