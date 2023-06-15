#include <bits/stdc++.h> 
void uni(vector<int>&arr,int indx,int n,vector<int>v,vector<vector<int>>&ans){
  
        ans.push_back(v);
      
    for(int i=indx;i<n;i++){
        if(i>indx&&arr[i]==arr[i-1]) continue;
        v.push_back(arr[i]);
        uni(arr,i+1,n,v,ans);
        v.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    if(n==0){
        return {};
    }
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>v;
    uni(arr,0,n,v,ans);
    
    return ans;
}