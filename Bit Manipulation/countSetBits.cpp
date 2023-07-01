#include <bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;

  int count = 0;

  while(N){
    count += N & 1;
    N >>= 1;
  }
  cout << count << endl;
}
