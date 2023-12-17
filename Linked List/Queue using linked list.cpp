void MyQueue:: push(int x)
{
        QueueNode* node = new QueueNode(x);
        if(front == NULL){
            front = node;
            rear = node;
            return;
        }
        
        rear->next = node;
        rear = rear->next;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front == NULL){
        return -1;
    }
    
    int res = front->data;
    front = front->next;
    return res;
}
