#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5000];
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << "Maximum: " << arr[n-1] << endl;
    cout << "Minimum: " << arr[0] << endl;
}
