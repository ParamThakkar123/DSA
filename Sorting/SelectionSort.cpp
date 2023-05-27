#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

void selection_sort(int arr[], int n){
    int min_idx;
    for(int i = 0; i < n; i++){
        min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(arr[min_idx], arr[i]);
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selection_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
