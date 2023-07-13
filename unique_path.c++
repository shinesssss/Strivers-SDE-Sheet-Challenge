// recursive solution
int paths(int m,int n){
	if(m==0 && n==0){
		return 1;
	}
	if(m<0 || n<0){
		return 0;
	}
	int up=paths(m-1,n);
	int down=paths(m,n-1);
	return up+down;
}
int uniquePaths(int m, int n) {
	// Write your code here.
return paths(m-1,n-1);
}

//memiozation(due to overlapping subproblems)
int paths(int m,int n,vector<vector<int>>&dp){
	if(m==0 && n==0){
		return 1;
	}
	if(m<0 || n<0){
		return 0;
	}
	if(dp[m][n]!=-1){
		return dp[m][n];
	}
	int up=paths(m-1,n,dp);
	int down=paths(m,n-1,dp);
	return dp[m][n]=up+down;
}
int uniquePaths(int m, int n) {
	// Write your code here.
vector<vector<int>> dp(m,vector<int>(n,-1));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j==0){
				dp[i][j]=1;
			}
		}
	}
return paths(m-1,n-1,dp);
}
//tabulation
