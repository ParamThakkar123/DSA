#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* next;
  Node(int data){
    this->data = data;
    next = NULL:
  }
};

struct LinkedList{
  Node* head;
  LinkedList(){
    head = NULL:
  }
  Node* rever(Node* head){
    if(head == NULL || head->next == NULL){
      return head;
    }
    Node *rest = rever(head->next);
    head->next->next = head;
    
    head->next = NULL;
    return rest;
  }
  
  void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
  
  void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

int main(){
  LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();

	ll.head = ll.rever(ll.head);

	cout << "\nReversed linked list \n";
	ll.print();
	return 0;
}
