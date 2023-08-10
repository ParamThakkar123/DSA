#include <bits/stdc++.h>
using namespace std;

long long seriesSum(int n) {
	   long flag = n;
     flag *= (flag+1);
     flag /=2;
     return flag;
	}

int main(){
  int n;
  cin >> n;

  cout << seriesSum(n) << endl;
}
