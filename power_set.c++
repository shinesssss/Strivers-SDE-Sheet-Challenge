#include <bits/stdc++.h> 
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>>ans;
    int n=v.size();
    int ts=pow(2,n)-1;

    for(int i=0;i<=ts;i++){
vector<int>v1;
for(int j=0;j<=n-1;j++){
    if((i&(1<<j))){
        v1.push_back(v[j]);
    }
}
ans.push_back(v1);
    }
    return ans;
}