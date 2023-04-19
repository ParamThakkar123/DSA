#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int main(){
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            v.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            v.push_back(arr[i]);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}
