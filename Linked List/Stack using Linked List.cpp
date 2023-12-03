#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* link;
    
    Node(int n){
        this->data = n;
        this->link = NULL;
    }
};

class Stack{
    Node* top;
public:
    Stack(){
        top = NULL;
    }
    
    void push(int data){
        Node* temp = new Node(data);
        
        if(!temp){
            cout << "Stack Overflow" << endl;
        }
        
        temp->data = data;
        temp->link = top;
        
        top = temp;
    }
    
    bool isEmpty(){
        return top == NULL;
    }
    
    int peek(){
        if(!isEmpty()){
            return top->data;
        }
        else{
            exit(1);
        }
    }
    
    void pop(){
        Node* temp;
        
        if(top == NULL){
            cout << "Stack Underflow" << endl;
        }
        else{
            temp = top;
            top = top->link;
            free(temp);
        }
    }
    
    void display(){
        Node* temp;
        if(top == NULL){
            cout << "Stack Underflow" << endl;
        }
        
        else{
            temp = top;
            while(temp != NULL){
                cout << temp->data;
                temp = temp->link;
                
                if(temp != NULL){
                    cout << " -> "; 
                }
            }
        }
    }
};

int main(){
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    
    s.display();
    cout << endl;
    cout << "Top element is : " << s.peek() << endl;
    
    s.pop();
    s.pop();
    
    s.display();
    cout << "\nTop element is " << s.peek() << endl;
}
