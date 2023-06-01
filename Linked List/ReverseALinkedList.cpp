#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
}

void push(Node** head_ref, int new_data){
  Node* new_node = new Node();
  
  new_node->data = new_data;
  
  new_node->next = (*head_ref);
  
  (*head_ref) = new_node;
}

void reverse(){
  Node* head = NULL;
  Node* current = NULL;
  Node* prev = NULL;
  Node* next = NULL;
  
  while(current != NULL){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

void printList(Node* n){
  while(n != NULL){
    cout << n->data << " ";
    n = n->next;
  }
}

int main(){
  Node* head = NULL;

    push(&head, 1);
    push(&head, 3);
    push(&head, 5);
    push(&head, 7);
    push(&head, 9);

    Rev();

    printList(head);
}
