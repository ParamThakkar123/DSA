#include <bits/stdc++.h>
using namespace std;

int counttrailingzeroes(int n){
  int res = log2(N ^ (N-1));
  return res >= 0 ? res : 0;
}

int main(){
  int n;
  cin >> n;
  
  cout << counttrailingzeroes(n) << endl;
}
