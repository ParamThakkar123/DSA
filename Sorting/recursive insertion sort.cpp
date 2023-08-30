#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+2;
int arr[N];

void recurisort(int arr[], int n){
    if (n <= 1)
        return;
  
    recurisort( arr, n-1 );
  
    int last = arr[n-1];
    int j = n-2;
  
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    recurisort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
