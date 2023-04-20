#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr1[N], arr2[N];

int main(){
    int n, m;
    set<int> s;
    cin >> n >> m;
    int counting = 0;
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++){
        s.insert(arr1[i]);
    }
    for(int i = 0; i < m; i++){
        s.insert(arr2[i]);
    }
    for(int i = 0; i < m; i++){
        for(int j = n; j >= i; j--){
            if(arr1[i] == arr2[j]){
                counting++;
            }
        }
    }
    cout << counting <<" " << s.size() << endl;
}
