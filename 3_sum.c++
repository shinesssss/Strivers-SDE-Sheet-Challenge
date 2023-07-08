#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	set<vector<int>>s;
	for(int i=0;i<n;i++){
		int j=i+1;
		int k=n-1;
		while(j<k){
			int sum=arr[i]+arr[j]+arr[k];
			if(sum==K){
				s.insert({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}else if(sum>K){
				k--;
			}else if(sum<K){
				j++;
			}
		}
	}
	for(auto it:s){
		ans.push_back(it);
	}
	return ans;
}