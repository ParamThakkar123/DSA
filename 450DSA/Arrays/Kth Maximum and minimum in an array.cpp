#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5000];
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    cout << "Kth Minimum : " << arr[k] << endl;
    cout << "Kth Maximum : " << arr[n-k] << endl;
}
