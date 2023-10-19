#include <bits/stdc++.h>
using namespace std;
const int N = 1e4;

vector<bool> isPrime(N, 1);

int main(){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < N; i++){
        if(isPrime[i] == true){
            for(int j = 2*i; j < N; j += i){
                isPrime[j] = false;
            }
        }
    }

    int t;
    cin >> t;
    while(t--){
        long long int a, b;
        cin >> a >> b;

        for(int i = a; i <= b; i++){
            if(isPrime[i] == true){
                cout << i << endl;
            }
        }
    }
}
