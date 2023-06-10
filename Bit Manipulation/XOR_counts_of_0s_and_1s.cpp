#include <bits/stdc++.h>
using namespace std;

int find_xor(int n)
	{
	    int count0 = 0, count1 = 0;
	    while(n){
	        (n % 2 == 0) ? count0++ : count1++;
	        n = n / 2;
	    }
	    return (count0 ^ count1);
	}

int main(){
  int n;
  cin >> n;
  
  cout << find_xor(n) << endl;
}
