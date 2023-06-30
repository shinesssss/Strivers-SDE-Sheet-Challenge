/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool check(BinaryTreeNode<int>* root1,BinaryTreeNode<int>* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){return false;}
    bool rv=(root1->data==root2->data);
    bool lv=check(root1->left,root2->right);
    bool r=check(root1->right,root2->left);
    return rv && lv && r;
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    if(root==NULL){
        return true;
    }
    return check(root->left,root->right);
}