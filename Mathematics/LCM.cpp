#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(a, a%b);
    }
}

int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
}
