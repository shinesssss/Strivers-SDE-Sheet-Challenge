#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
void getpath(TreeNode<int>*root,vector<int>&ans,int x){
	if(root==NULL){
		return ;
	}

	if(root->data==x){
		ans.push_back(root->data);
		return;
	}
	ans.push_back(root->data);
	getpath(root->left,ans,x);
	getpath(root->right,ans,x);
	if(ans[ans.size()-1]!=x){
		ans.pop_back();
	}


}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.

	vector<int>ans;
	if(root==NULL){
		return ans;
	}
	getpath(root,ans,x);
	return ans;
}
//TIME-COMPLEXITY:0(N)
//SPACE-COMPLEXITY:0(H); //height of tree
