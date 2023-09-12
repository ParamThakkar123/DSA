/*
There are N buckets (5 ≤ N ≤ 105
), each with a certain capacity Ci (1 ≤ Ci ≤ 100). One
day, after a rainstorm, each bucket is filled with Ai units of water (1 ≤ Ai ≤ Ci). Charlie
then performs the following process: he pours bucket 1 into bucket 2, then bucket 2 into
bucket 3, and so on, up until pouring bucket N − 1 into bucket N. When Charlie pours
bucket B into bucket B + 1, he pours as much as possible until bucket B is empty or bucket
B + 1 is full. Find out how much water is in each bucket once Charlie is done pouring.
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int C[N], A[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> C[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    
    for(int i = 0; i < n-1; i++){
        int amt = min(A[i], C[i+1] - A[i+1]);
        A[i] = A[i] - amt;
        A[i+1] = A[i+1] + amt;
    }
    
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
