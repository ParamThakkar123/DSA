#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5000];
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }

    cout << "Maximum: " << maxi << endl;
    cout << "Minimum: " << mini << endl;
}
