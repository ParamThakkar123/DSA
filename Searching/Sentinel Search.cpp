#include<bits/stdc++.h>
using namespace std;
const int N =1e7+10;
int arr[N];

void SentinelSearch(int arr[], int n, int x){
  int last = arr[n-1];
  
  int i = 0;
  while(arr[i] != x){
    i++;
  }
  arr[n-1] = last;
  if(i < n-1 || arr[n-1] == x){
    cout << x << " " << "found at index" << i << endl;
  }
  else{
    cout << "Element not found" << endl;
  }    
}

int main(){
  int n, x;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cin >> x;
  
  SentinelSearch(arr, n, x);
}
