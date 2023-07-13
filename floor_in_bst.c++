#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void flo(TreeNode<int> * root, int X,int &ans){
    if(root==NULL){
        return;
    }
    if(root->val==X){
        ans=root->val;
        return;
    }
    if(root->val<X){
        ans=max(ans,root->val);
        flo(root->right,X,ans);
    }else if(root->val>X){
        flo(root->left,X,ans);
    }
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int ans=0;
    flo(root,X,ans);
    return ans;
}