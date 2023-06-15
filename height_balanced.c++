#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int height(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    if(root==NULL){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)>1){
        return false;
    }
  bool le= isBalancedBT(root->left);
  bool re=isBalancedBT(root->right);
    return le&&re;

}
TC:O(N^2);
SC:0(N);
//optimal approaxh
#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int height(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(lh==-1|| rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    return max(lh,rh)+1;
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    if(height(root)==-1){
        return false;
    }else
        return true;
    

}