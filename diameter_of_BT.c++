int maxi=0;
int height(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
void diam(TreeNode<int> *root,int &maxi){
    if(root==NULL){
        return;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    maxi=max(lh+rh,maxi);
    diam(root->left,maxi);
    diam(root->right,maxi);

}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
  int maxi=0;
  diam(root,maxi);
  return maxi;
}
//time complexity:0(N^2);
//space complexity:o(n);
//BRUTE FORCE APPROACH

int maxi=0;
int height(TreeNode<int> *root,int &maxi){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left,maxi);
    int rh=height(root->right,maxi);
    maxi=max(lh+rh,maxi);
    return max(lh,rh)+1;
}
// void diam(TreeNode<int> *root,int &maxi){
//     if(root==NULL){
//         return;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);
//     maxi=max(lh+rh,maxi);
//     diam(root->left,maxi);
//     diam(root->right,maxi);

// }
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
  int maxi=0;
  height(root,maxi);
  return maxi;
}
