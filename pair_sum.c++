vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>ans;
   unordered_map<int,int>m;
   int n=arr.size();
   for(int i=0;i<n;i++){
      if(m.find(s-arr[i])!=m.end()){
         int op=m[s-arr[i]];
         vector<int>v;
         while(op--){
         v.push_back(min(arr[i],s-arr[i]));
         v.push_back(max(arr[i],s-arr[i]));
         ans.push_back(v);
         }
      }
         m[arr[i]]++;
      
   }
   sort(ans.begin(),ans.end());
   return ans;
}