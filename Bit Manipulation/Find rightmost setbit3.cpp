#include <bits/stdc++.h>
using namespace std;

int getright(int num)
{
    if (num == 0) // for num==0 there is zero set bit
    {
        return 0;
    }
    else {
        int pos = 1;
        // counting the position of first set bit
        for (int i = 0; i < INT_SIZE; i++) {
            if (!(num & (1 << i)))
                pos++;
            else
                break;
        }
        return pos;
    }
}

int main(){
  int n;
  cin >> n;

  cout << getright(n) << endl;
}
