#include <bits/stdc++.h>
using namespace std;

void permute(string &a, int l, int r){
  int i;

  if(l == r){
    cout << a << endl;
  }
  for(int i = l; i <= r; i++){
    swap(a[l), a[i]);
    permute(a, l+1, r);
    swap(a[l], a[i]);
  }
}

int main(){
  string s;
  cin >> s;
  int n = s.length() - 1;
   
  permute(s, 0, n-1);
}
