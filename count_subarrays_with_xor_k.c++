#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int>mp;
    int n=arr.size();
    int xors=0;
    int c=0;
    for(int i=0;i<n;i++){
        xors=xors^arr[i];
        if(xors==x){
            c++;
        }
        if(mp.find(xors^x)!=mp.end()){
            c=c+mp[xors^x];
        }
        mp[xors]++;
    }
    return c;
    
}