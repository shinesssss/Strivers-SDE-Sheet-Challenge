#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>ans;
    if(root==NULL){
        return ans;
    }
    vector<int>pre;
    vector<int>ino;
    vector<int>pos;
    stack<pair<BinaryTreeNode<int> *,int>>st;
    st.push({root,1});
    //there are some rules for traversal
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        //preorder -traversal
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left,1});
            }
        }
        //inorder
       else if(it.second==2){
            ino.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
                st.push({it.first->right,1});
            }
        }
        //postorder
        else{
            pos.push_back(it.first->data);
        }
    }
    ans.push_back(ino);
    ans.push_back(pre);
    ans.push_back(pos);
    return ans;
}
//TC:0(3N)
//SC:0(4N);