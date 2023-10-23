#include <bits/stdc++.h>
using namespace std;

unsigned int getright(int n){
  return log2(n & -n) + 1;
}

int main(){
  int n;
  cin >> n;

  cout << getright(n) << endl;
}
