#include <bits/stdc++.h>
using namespace std;

typedef complex<double> cd;

vector<cd> fft(vector<cd> &a){
    int n = a.size();
    if(n == 1){
        return vector<cd>(1, a[0]);
    }
    
    vector<cd> w(n);
    for(int i = 0; i < n; i++){
        double alpha = -2 * M_PI * i / n;
        w[i] = cd(cos(alpha), sin(alpha));
    }
    
    vector<cd> A0(n/2), A1(n/2);
    for(int i = 0; i < n/2; i++){
        A0[i] = a[i*2];
        A1[i] = a[i*2 + 1];
    }
    
    vector<cd> y0 = fft(A0);
    vector<cd> y1 = fft(A1);
    
    vector<cd> y(n);
    for(int k = 0; k < n/2; k++){
        y[k] = y0[k] + w[k] * y1[k];
        y[k + n / 2] = y0[k] - w[k] * y1[k];
    }
    
    return y;
}

int main(){
    vector<cd> a{1, 2, 3, 4};
    vector<cd> b = fft(a);
    for(int i = 0; i < 4; i++){
        cout << b[i] << endl;
    }
}
