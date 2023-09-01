#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+2;
int arr[N];

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int x = arr[n-1];
    
    for(int i = n-1; i >= 0; i--){
        arr[i] = arr[i-1]; 
    }
    
    arr[0] = x;
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
