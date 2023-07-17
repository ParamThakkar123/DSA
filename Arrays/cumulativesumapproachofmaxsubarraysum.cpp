#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+2;
int arr[N], currsum[N+1];

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    currsum[0] = 0;
    for(int i = 1; i <= n; i++){
        currsum[i] = currsum[i-1] + arr[i-1];
    }
    
    int maxSum = INT_MIN;
    for(int i = 0; i <= n; i++){
        int sum = 0;
        for(int j = 0; j < i-1; j++){
            sum = currsum[i] - currsum[j];
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum << endl;
}
