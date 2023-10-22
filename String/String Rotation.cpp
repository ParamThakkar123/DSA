#include <bits/stdc++.h>
using namespace std;

void leftRotate(string &s, int d){
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}

void rightRotate(string &s, int d){
    int n = s.length();
    leftRotate(s, n-d);
}

int main(){
    string str;
    cin >> str;
    
    int d;
    cin >> d;
    
    leftRotate(str, d);
    cout << "Left rotated " << str << endl;
    rightRotate(str, d);
    cout << "Right rotate " << str << endl;
}
