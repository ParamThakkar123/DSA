#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return ;
    }
    
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool searching(node* head, int key){
    node* temp = head;
    bool flag = false;
    while(temp != NULL){
        if(temp->data == key){
            flag = true;
        }
        temp = temp->next;
    }
    return flag;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtHead(node* head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

node* revers(node* head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    
    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* head){
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return newhead;
}

void deletion(node* head, int val){
    if(head == NULL){
        return;
    }
    
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    
    delete todelete;
}

int main(){
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    
    display(head);
    node* newhead = revers(head);
    display(newhead);
}
