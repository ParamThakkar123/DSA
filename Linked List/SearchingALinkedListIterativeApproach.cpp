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

bool Search(Node* head, int x){
  while(current != NULL){
    if(current->data == x){
      return true;
    }
    current = current->next;
    return false
  }
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

    if(Search(head, x) == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
