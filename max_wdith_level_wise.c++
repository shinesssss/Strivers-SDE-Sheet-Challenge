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

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL){
        return 0;
    }
    queue<TreeNode<int>*>q;
    q.push(root);
    int ans=0;
    while(!q.empty()){
          int n=q.size();
          for(int i=0;i<n;i++){
        TreeNode<int>*fro=q.front();
        q.pop();
      
        ans=max(ans,n);
        if(fro->left!=NULL){
            q.push(fro->left);
        }
        if(fro->right!=NULL){
            q.push(fro->right);
        }
          }
    }
    return ans;
}