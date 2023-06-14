#include<queue>
void fill(int x,int y,int ic,int newColor,vector<vector<int>>&ans,vector<vector<int>>&image,vector<vector<int>>&vis){
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=1;
    ans[x][y]=newColor;
    int n=image.size();
    int m=image[0].size();
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        int rr[4]={-1,0,+1,0};
        int cc[4]={0,+1,0,-1};
        for(int i=0;i<4;i++){
            int nr=row+rr[i];
            int nc=col+cc[i];
            if( nr>=0 && nr<n && nc>=0 && nc<m &&image[nr][nc]==ic && !vis[nr][nc]){
                q.push({nr,nc});
                vis[nr][nc]=1;
                ans[nr][nc]=newColor;
            }
        }
    }
    
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    vector<vector<int>>ans=image;
    int ic=image[x][y];
    int n=image.size();
    int m=image[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    fill(x,y,ic,newColor,ans,image,vis);
    return ans;
    
}
space complexity:o(n*m)+o(n*m)+o(n*m);  (ans+vis+queue)
time complexity:0(n*m)