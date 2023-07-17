#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int pro=1;
	int maxp=INT_MIN;
	int pre=1;
	int suff=1;
	for(int i=0;i<arr.size();i++){
		if(pre==0){
			pre=1;
		}
		if(suff==0){
			suff=1;
		}
		pre=pre*arr[i];
		suff=suff*arr[n-i-1];
		maxp=max(maxp,max(pre,suff));
	}
	return maxp;
}
