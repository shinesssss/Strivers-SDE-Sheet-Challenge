#include <bits/stdc++.h> 
bool palind(string &s,int ind,int j){
    while(ind<j){
        if(s[ind]!=s[j]){
            return false;
        }
        ind++;
        j--;
    }
    return true;
}
void plain(string &s,vector<vector<string>>&ans,vector<string>&out,int ind){
    if(ind>=s.length()){
        ans.push_back(out);
        return;
    }
    for(int i=ind;i<s.length();i++){
        if(palind(s,ind,i)){
            out.push_back(s.substr(ind,i-ind+1));
            plain(s,ans,out,i+1);
            out.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    int ind=0;
    vector<vector<string>>ans;
    vector<string>out;
    plain(s,ans,out,ind);
    return ans;
}