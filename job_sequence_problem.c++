#include <bits/stdc++.h> 
bool static cmp(vector<int>a,vector<int>b){
    return a[1]>b[1];
    
    
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();;
    sort(jobs.begin(),jobs.end(),cmp);
    int ms=jobs[0][1];;
    for(int i=1;i<n;i++){
        ms=max(ms,jobs[i][0]);
        
    }
    vector<int>vis(ms+1,-1);
    for(int i=0;i<n;i++){
        int l=jobs[i][0];
        for(int j=l;j>0;j--){
            if(vis[j]==-1){
                vis[j]=jobs[i][1];
                break;
            }
        }
    }
    int pr=0;
    for(int i=0;i<ms+1;i++){
        if(vis[i]!=-1){
            pr=pr+vis[i];
        }
    }
    return pr;
}
