#include<vector>
long countw(int *denominations,long i,int value,vector<vector<long>>&dp){
    if(i==0){
        return (value%denominations[0]==0);
    }
    if(dp[i][value]!=-1){
        return dp[i][value];
    }
    long np=countw(denominations,i-1,value,dp);
    long p=0;
    if(denominations[i]<=value){
        p=countw(denominations,i,value-denominations[i],dp);
    }
    return dp[i][value]=np+p;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    long i=n-1;
    vector<vector<long>>dp(n,vector<long>(value+1,-1));
    return countw(denominations,i,value,dp);
}