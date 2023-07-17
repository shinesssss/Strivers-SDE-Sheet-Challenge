#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void ksmall(TreeNode<int>* root,int &k,int &ans){
   if(root==NULL || k<=0){
       return;
   }
  
   
    ksmall(root->left,k,ans);
     k--;
     if(k==0){
       ans=root->data;
       return;
   }
   
    ksmall(root->right,k,ans);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    int ans=-1;
   // int count=0;
    ksmall(root,k,ans);
    return ans;
}