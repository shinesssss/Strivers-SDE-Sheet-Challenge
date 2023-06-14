bool equal(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2){
     
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL|| root2==NULL){
        return false;
    }
   if(root1->data!=root2->data){
        return false;
    }
    bool lp=equal(root1->left,root2->left);
     
    bool rp=equal(root1->right,root2->right);
    return lp&& rp;

}
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 	
return equal(root1,root2);
}
//time complexity:0(n)
//space complexity:0(n)//stack space
