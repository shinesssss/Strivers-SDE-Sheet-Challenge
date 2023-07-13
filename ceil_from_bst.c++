#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void ceil(BinaryTreeNode<int> *node, int x,int &ans){
    if(node==NULL){
        return;
    }
    if(node->data==x){
        ans=node->data;
        return;
    }
    if(node->data<x){
        ceil(node->right,x,ans);
    }else if(node->data>x){
        ans=min(ans,node->data);
    ceil(node->left,x,ans);
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=INT_MAX;
    ceil(node,x,ans);
    if(ans==INT_MAX){
        return -1;
    }
    return ans;
}