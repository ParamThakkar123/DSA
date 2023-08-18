#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int arr[N];

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void build_heap(int arr[], int n){
    int last = (n/2) - 1;
    
    for(int i = last; i >= 0; i--){
        heapify(arr, n, i);
    }
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }
    
    build_heap(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
