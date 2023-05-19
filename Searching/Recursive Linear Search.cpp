#include <iostream>
using namespace std;
const int N =1e7+10;
int arr[N];

int LinearSearch(int arr[], int n, int x){
    if(n == 0){
        return -1;
    }
    else if(arr[n - 1] == x){
        return n-1;
    }
    else{
        return LinearSearch(arr, n-1, x);
    }
}

int main(){
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;
    cout << LinearSearch(arr, n, x) << endl;
}
