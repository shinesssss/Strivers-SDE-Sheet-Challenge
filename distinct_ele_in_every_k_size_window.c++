#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    vector<int>ans;
    // Write your code here
    int n=arr.size();
    int i=0;
    int j=0;
    map<int,int>m;
    while(j<n){
        m[arr[j]]++;
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            ans.push_back(m.size());
            m[arr[i]]--;
            if(m[arr[i]]==0){
                m.erase(arr[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
	
}
