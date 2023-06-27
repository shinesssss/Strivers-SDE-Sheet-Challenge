#include<queue>
bool check(vector<int>adj[],int vis[],int i){
	queue<int>q;
	q.push(i);
	vis[i]=0;
	while(!q.empty())
	{
		int fro=q.front();
		q.pop();
		for(auto it:adj[fro]){
			if(vis[it]==-1){   // vo colored nhi h
				vis[it]=!vis[fro];
			//	vis[it]=1;
				q.push(it);
			}else if(vis[it]==vis[fro]) {
			return false;
			}

		}
	}
	return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	int n=edges.size();
	vector<int>adj[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(edges[i][j]==1 ){
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}
	//bool ans=true;
	int vis[n];
	for(int i=0;i<n;i++){
		vis[i]=-1;
	}
	for(int i=0;i<n;i++){
		if(vis[i]==-1){
			if(check(adj,vis,i)==false){
				return false;
			}
		}
	}
	return true;
}