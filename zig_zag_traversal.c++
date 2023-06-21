vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    bool flag=true;       //false-right to left
    //right- left to right
    while(!q.empty()){
        int n=q.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            BinaryTreeNode<int>* fro=q.front();
            q.pop();
            if(flag==true){
                v[i]=fro->data;
                            }else {
                                v[n-i-1]=fro->data;
                            }
            if(fro->left!=NULL){
                q.push(fro->left);
            }
            if(fro->right!=NULL){
                q.push(fro->right);
            }
          
         }
        flag=!flag;
       for(int i=0;i<n;i++){
           ans.push_back(v[i]);
       }
    }
    return ans;

}