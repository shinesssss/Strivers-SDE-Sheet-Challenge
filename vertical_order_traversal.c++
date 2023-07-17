vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    vector<int>ans;
    queue<pair<TreeNode<int>*,pair<int,int>>>q;
    map<int,map<int,vector<int>>>mp;
    q.push({root,{0,0}});
    while(!q.empty()){
        
        TreeNode<int>* nod=q.front().first;
        int ver=q.front().second.first;
        int lev=q.front().second.second;
        q.pop();
        mp[ver][lev].push_back(nod->data);
        if(nod->left!=NULL){
            q.push({nod->left,{ver-1,lev+1}});
        }
        if(nod->right!=NULL){
            q.push({nod->right,{ver+1,lev+1}});
        }
    }
    for(auto it:mp){
        for(auto j:it.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
}