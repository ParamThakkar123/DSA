class Solution{

public:
    int floor(Node* root, int key) {
        int flooring = -1;
        
        while(root){
            if(root->data == key){
                flooring = root->data;
                return flooring;
            }
            
            if(key > root->data){
                flooring = root->data;
                root = root->right;
            }
            
            else{
                root = root->left;
            }
        }
        
        return flooring;
    }
};
