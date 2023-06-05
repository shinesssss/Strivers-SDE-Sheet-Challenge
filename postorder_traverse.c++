void post(TreeNode *root,vector<int>&v){
if(root==NULL){
    return;
}
post(root->left,v);
post(root->right,v);
v.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>v;
    post(root,v);
    return v;
}