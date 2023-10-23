#include <bits/stdc++.h>
using namespace std;

unsigned int getright(int n){
  return ffs(n);
}

int main(){
  int n;
  cin >> n;

  cout << getright(n) << endl;
}
