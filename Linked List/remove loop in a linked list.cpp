class Solution
{
    public:
    //Function to remove a loop in the linked list.
    
    void removeLoop(Node* head)
    {
       Node* slow = head;
       Node* fast = head;
       
       while(fast != NULL && fast->next != NULL){
           slow = slow->next;
           fast = fast->next->next;
           
           if(slow == fast){
               break;
           }
       }
       
       if(slow != fast){
           return;
       }
       
       Node* check = fast;
       while(head == fast){
           if(check->next == head){
               check->next = NULL;
               return;
           }
           check = check->next;
       }
       slow = head;
       while(slow->next != fast->next){
           slow = slow->next;
           fast = fast->next;
       }
       fast->next = NULL;
    }
};
