#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+2;
int arr[N];

void insertionSort(int arr[], int n){
    int key = 0, i = 0;
    for(int j = 1; j < n; j++){
        key = arr[j];
        i = j - 1;
        while(i >= 0 && arr[i] > key){
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i+1] = key;
    }
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    insertionSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
