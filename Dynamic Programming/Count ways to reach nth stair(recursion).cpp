#include <bits/stdc++.h>
using namespace std;

int countWays(int n){
    if(n <= 1){
        return 1;
    }
    
    else{
        return countWays(n-1) + countWays(n-2);
    }
}

int main(){
    int n;
    cin >> n;
    
    cout << countWays(n) << endl;
}
