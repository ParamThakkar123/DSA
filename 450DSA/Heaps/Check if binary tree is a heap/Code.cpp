class Solution {
  public:
  
    int countNodes(struct Node* root){
        if(root == NULL) return 0;
        
        int res = 1 + countNodes(root->left) + countNodes(root->right);
        return res;
    }
    
    bool isCBT(struct Node* root, int index, int cntNodes){
        if(root == NULL) return true;
        
        if(index >= cntNodes) return false;
        else{
            bool left = isCBT(root->left, 2*index + 1, cntNodes);
            bool right = isCBT(root->right, 2*index+2, cntNodes);
            
            return (left && right);
        }
    }
    
    bool isMaxHeap(struct Node* root){
        if(root->left == NULL && root->right == NULL) return true;
        
        if(root->right == NULL){
            return (root->data > root->left->data);
        }
        
        else{
            bool left = isMaxHeap(root->left);
            bool right = isMaxHeap(root->right);
            
            return ((root->data > root->left->data) && root->data > root->right->data && (left && right));
        }
    }
    
    bool isHeap(struct Node* root) {
        int index = 0;
        int cntNodes = countNodes(root);
        if(isCBT(root, index, cntNodes) && (isMaxHeap(root))){
            return true;
        }
        else{
            return false;
        }
    }
};
