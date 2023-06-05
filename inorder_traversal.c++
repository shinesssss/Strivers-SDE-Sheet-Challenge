//inorder traversal
void inorder(TreeNode *root,vector<int>&v){
    if(root==NULL){
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>v;
    inorder(root,v);
    return v;
}
TIME-COMPLEXITY:0(N);
