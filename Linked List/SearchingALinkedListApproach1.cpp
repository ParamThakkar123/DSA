#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int main(){
    Node* head = NULL;
    int x;
    x = 21;

    push(&head, 10);
    push(&head, 14);
    push(&head, 11);
    push(&head, 21);
    push(&head, 30);

    vector<int>v;
    Node* temp = head;

    while(temp != NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    vector<int> :: iterator it;
    find(v.begin(), v.end(), x);
    if(it == v.end()){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
}
