#include<algorithm>
void uniq(int indx,vector<int>&arr,int target,vector<int>v,vector<vector<int>>&ans,int n){
	if(target==0){
		ans.push_back(v);
		return;
	}
	//pick
	//first check

	for(int i=indx;i<n;i++){
	if(i>indx && arr[i]==arr[i-1])continue;
	if(arr[i]>target)break;
	v.push_back(arr[i]);
	uniq(i+1,arr,target-arr[i],v,ans,n);
	v.pop_back();
	}
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	vector<int>v;
	uniq(0,arr,target,v,ans,n);
	return ans;
}
