#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];


int BinSearch(int arr[], int n, int x){
    int start = 0, ending = n-1;

    while(start <= ending){
        int mid = start + ((ending - start)/2);

        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            start = mid + 1;
            return start;
        }
        else{
            ending = mid;
            return ending;
        }
    }
}

int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;

    cout << BinSearch(arr, n, x) << endl; // 0-based indexing
}
