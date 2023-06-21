#include <bits/stdc++.h> 
    bool dfs(int node,stack<int>&st,vector<int>adj[],int vis[]){
        vis[node] = 1;
        for(auto &it:adj[node]){
            if(!vis[it]){
                dfs(it,st,adj,vis);
            }
        }
        st.push(node);
    }
vector<int> topologicalSort(vector<vector<int>> &edges, int V, int e)  {
    // Write your code here
    vector<int>adj[V];
     for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    	    int vis[V]={0};
	    stack<int>st;
        vector<int>topo;    
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	        dfs(i,st,adj,vis);
	    }
	   // vector<int>topo;
        while(!st.empty()){
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
}