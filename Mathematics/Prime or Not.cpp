#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int cnt = 0;
    if(n == 1 || n == 0){
        return false;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "Is Prime" << endl;
    }

    else{
        cout << "Not Prime" << endl;
    }
    }
}
