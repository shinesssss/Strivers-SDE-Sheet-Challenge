#include<vector>
int rec(string s,string t,int i1,int i2,vector<vector<int>>&dp){
	if(i1<0|| i2<0){
		return 0;
	}
	if(dp[i1][i2]!=-1){
		return dp[i1][i2];
	}
	if(s[i1]==t[i2]){
		return  dp[i1][i2]=1+rec(s,t,i1-1,i2-1,dp);
	}else {
		return dp[i1][i2]= 0+max(rec(s,t,i1-1,i2,dp),rec(s,t,i1,i2-1,dp));
	}
}
int lcs(string s, string t)
{
	//Write your code here
	int i1=s.length()-1;
	int i2=t.length()-1;
	int n=s.length();
	int m=t.length();
	vector<vector<int>>dp(n,vector<int>(m,-1));
	return rec(s,t,i1,i2,dp);
}