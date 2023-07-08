#include<algorithm>
// #include<queue>
// int lar(vector<int>&arr,int n,int k){
// 	//min priprity_queue
// 	priority_queue<int,vector<int>,greater<int>>pq;
// 	for(int i=0;i<k;i++){
// 		pq.push(arr[i]);
// 	}
// 	for(int i=k;i<arr.size();i++){
// 		if(pq.top()<arr[i]){
// 			pq.pop();
// 			pq.push(arr[i]);
// 		}
// 	}
// 	return pq.top();
// }
// int smal(vector<int>&arr,int n,int k){
// 	priority_queue<int>pq;
// 	for(int i=0;i<k;i++){
// 		pq.push(arr[i]);
// 	}
// 	for(int i=k;i<n;i++){
// 		if(pq.top()>arr[i]){
// 			pq.pop();
// 			pq.push(arr[i]);
// 		}
// 	}
// 	return pq.top();
// }
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int>ans;
	sort(arr.begin(),arr.end());
	ans.push_back(arr[k-1]);
	ans.push_back(arr[n-k]);
	return ans;
}