#include<queue>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    vector<vector<int>>vis(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>>q;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(grid[i][j]==2 ){
                vis[i][j]=2;
                q.push({{i,j},0});
            }else {
                vis[i][j]=0;
            }
        }
    }
    int tmax=0;
    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        q.pop();
        tmax=max(t,tmax);
        int rr[4]={-1,0,+1,0};
        int cc[4]={0,+1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+rr[i];
            int nc=c+cc[i];
            if(nr>=0 &&nr<n && nc>=0 && nc<m && !vis[nr][nc]&& grid[nr][nc]==1){
                q.push({{nr,nc},t+1});
                vis[nr][nc]=2;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]!=2 && grid[i][j]==1){
                return -1;
            }
        }
    }
    return tmax;
 
}