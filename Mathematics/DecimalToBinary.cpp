#include <bits/stdc++.h>
using namespace std;

int bin(int n){
    return n > 1 ? 10*bin(n/2) + (n%2) : n%2;
}

int main(){
    int n;
    cin >> n;
    cout << bin(n);
}
