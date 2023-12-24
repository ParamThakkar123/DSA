#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int r, int k){
    priority_queue<int> pq;

    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }

    for(int i = k; i <= r; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans = pq.top();
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;

    int arr[5000];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << kthSmallest(arr, n, n-1, k) << endl;
}
