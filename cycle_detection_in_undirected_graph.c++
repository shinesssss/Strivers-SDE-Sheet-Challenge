#include<queue>
bool cycle(vector<int>adj[],int i,int vis[]){
    queue<pair<int,int>>q;
    q.push({i,-1});
    vis[i]=1;
    while(!q.empty()){
        pair<int,int>p=q.front();
        q.pop();
        int node=p.first;
        int parent=p.second;
        for(auto it:adj[node]){
            if(!vis[it]){
            vis[it]=1;
            q.push({it,node});
            }else if(it!=parent){
                return true;
            }
        }
       
    }
     return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int>adj[n+1];
   for(int i=0;i<m;i++){
       int u=edges[i][0];
       int v=edges[i][1];
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
    int vis[n+1]={0};
   for(int i=1;i<=n;i++){
       if(!vis[i]){
       if(cycle(adj,i,vis)){
           return "Yes";
       }
       }
   }
   return "No";
}
