#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+9;
int poly[N];

int horner(int poly[], int n, int x){
    int result = poly[0];
 
    for (int i=1; i<n; i++)
        result = result*x + poly[i];
 
    return result;
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> poly[i];
    }
    
    int x;
    cin >> x;
    
    cout << horner(poly, n, x) << endl;
}
