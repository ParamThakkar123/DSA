#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int arr[N];

int main(){
	int T, n, m;
  // T = Test case variable
	cin >> T;
	while(T--){
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		int i = m+1, j = n-1;
		while(i <= j){
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
		for(int k = 0; k < n; k++){
			cout << arr[k] << " ";
		}
	}
}
