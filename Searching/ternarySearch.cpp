#include <bits/stdc++.h>
using namespace std;

int ternarySearch(int l, int r, int key, int arr[]){
  if(r >= l){
    int mid1 = l + ((r-l)/3);
    int mid2 = r - ((r-l)/3);
    
    if(arr[mid1] == key){
      return mid1;
    }
    
    if(arr[mid2] == key){
      return mid2;
    }
    
    if(key < arr[mid1]){
      return ternarySearch(l, mid1-1, key, arr);
    }
    if(key > arr[mid2]){
      return ternarySearch(mid2+1, r, key, arr);
    }
  }
  return -1;
}

int main(){
  int n, x;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cin >> x;
  
  cout << ternarySearch(0, n-1, x, arr) << endl;
  
  return 0;
}
