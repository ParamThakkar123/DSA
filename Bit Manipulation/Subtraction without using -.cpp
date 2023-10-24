#include <bits/stdc++.h>
using namespace std;

int subtract(int x, int y){
    while(y != 0){
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    
    return x;
}

int main(){
    int a, b;
    cin >> a >> b;
    
    cout << subtract(a, b) << endl;
}
