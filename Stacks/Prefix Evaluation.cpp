#include <bits/stdc++.h>
using namespace std;

int prefixEval(string s){
    
    stack<int> st;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0');
        }
        else{
            double o1 = st.top();
            st.pop();
            double o2 = st.top();
            st.pop();
 
            // Use switch case to operate on o1
            // and o2 and perform o1 Or o2.
            switch (s[i]) {
            case '+':
                st.push(o1 + o2);
                break;
            case '-':
                st.push(o1 - o2);
                break;
            case '*':
                st.push(o1 * o2);
                break;
            case '/':
                st.push(o1 / o2);
                break;
            }
        }
    }
    return st.top();
}

int main(){
    string s;
    cin >> s;
    cout << prefixEval(s) << endl;
}
