#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

void rotating(int arr[], int d, int n){
    int temp[n];

    int j = 0;
    for(int i = d; i < n; i++){
        temp[j] = arr[i];
        j++;
    }
    for(int i = 0; i < d; i++){
        temp[j] = arr[i];
        j++;
    }
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int n, d;
    cin >> n ;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rotating(arr, d, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
