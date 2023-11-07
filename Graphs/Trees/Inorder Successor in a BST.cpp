Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(root == NULL || x == NULL){
            return NULL;
        }
        
        Node* succ = NULL;
        while(root){
            if(root->data <= x->data){
                root = root->right;
            }
            else{
                succ = root;
                root = root->left;
            }
        }
        
        return succ;
    }
