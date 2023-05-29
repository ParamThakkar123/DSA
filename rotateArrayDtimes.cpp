#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

void rotating(int arr[], int d, int n){
    int p = 1;
    while(p <= d){
        int last = arr[0];
        for(int i = 0; i < n; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = last;
        p++;
    }
}

int main(){
    int n, d;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rotating(arr, d, n);
    for(int i= 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
