#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int InterpolationSearch(int arr[], int lo, int hi, int x){
  int pos;
  if(lo <= hi && x >= arr[lo] && x <= arr[hi]){
    pos = lo + ((double)(hi - lo)/((arr[hi] - arr[lo])) * (x - arr[lo]));
  }
  if(arr[pos] == x){
    return pos;
  }
  if(arr[pos] < x){
    return InterpolationSearch(arr, lo, pos+1, x);
  }
  if(arr[pos] > x){
    return InterpolationSearch(arr, pos-1, hi, x);
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
  cout << InterpolationSearch(arr, 0, n-1, x) << endl;
}
