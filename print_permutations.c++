#include <bits/stdc++.h> 
void permu(string &s,vector<string>&ans,int indx){
    if(indx>=s.length()){
        ans.push_back(s);
        return;
    }
    for(int i=indx;i<s.length();i++){
        swap(s[indx],s[i]);
        permu(s,ans,indx+1);
        swap(s[indx],s[i]); //backtracking(reswapping)
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
int indx=0;
permu(s,ans,indx);
return ans;
   
}