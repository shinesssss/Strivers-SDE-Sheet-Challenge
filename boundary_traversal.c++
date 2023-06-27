#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void lefts(TreeNode<int>* root, std::vector<int>& ans) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }

    ans.push_back(root->data);

    if (root->left != NULL) {
        lefts(root->left, ans);
    } else  {
        lefts(root->right, ans);
    }
}

void leaves(TreeNode<int>* root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    
    
        leaves(root->left,ans);
    
    
        leaves(root->right,ans);
    
}
void rights(TreeNode<int>* root, std::vector<int>& temp) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }

    temp.push_back(root->data);

    if (root->right) {
        rights(root->right, temp);
    } else {
        rights(root->left, temp);
    }
}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    //root push krdo
    ans.push_back(root->data);
    
    //firstly left
    lefts(root->left,ans);
    //leaf
    leaves(root->left,ans);
    leaves(root->right,ans);
    
    //right
    vector<int>temp;
    rights(root->right,temp);
   reverse(temp.begin(),temp.end());
 ans.insert(ans.end(),temp.begin(),temp.end());
    return ans;
}