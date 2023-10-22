#include <bits/stdc++.h>
using namespace std;

int findRotation(string str){
    string temp = str+str;
    int n = str.length();
    for(int i = 1; i <= n; i++){
        string substring = str.substr(i, str.size());
        if(str == substring){
            return i;
        }
    }
    return n;
}

int main(){
    string str;
    cin >> str;
    
    cout << findRotation(str) << endl;
}
