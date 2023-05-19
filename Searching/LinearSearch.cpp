#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout << i+1 << endl; // 1-based indexing
            break;
        }
    }
}
