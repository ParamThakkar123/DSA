#include <bits/stdc++.h>
using namespace std;

class QueueStack{
    private:
        queue<int> q1;
        queue<int> q2;
    public:
        void push(int x);
        int pop();
};

void QueueStack :: push(int x)
{
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
}

int QueueStack :: pop()
{
        if(q1.empty()){
            return -1;
        }
        int n = q1.front();
        q1.pop();
        return n;
}

int main(){
 QueueStack st;
 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);
 st.push(5);
 st.push(6);
 
 cout << st.pop() << endl;
 cout << st.pop() << endl;
}
