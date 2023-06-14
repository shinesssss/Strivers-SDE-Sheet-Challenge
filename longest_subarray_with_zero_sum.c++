#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  map<int,int>m;
  int sum=0;
  int n=arr.size();
  int maxi=0;
  int len=0;
  for(int i=0;i<n;i++){
    sum=sum+arr[i];
    if(sum==0){
      maxi=max(maxi,i+1);
    }
   else if(m.find(sum)!=m.end()){
      int p=m[sum];
      maxi=max(maxi,i-p);
    }else {
      m[sum]=i;
    }
  }
  return maxi;

}