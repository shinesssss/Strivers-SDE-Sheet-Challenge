//brute force approach

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int max_pr=0;
    int diff=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            diff=prices[j]-prices[i];
            max_pr=max(max_pr,diff);
        }
    }
    return max_pr;
}
//TC-O(N^2)
//better

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int max_pr=0;
    int diff=0;
 int   mini=prices[0];
    for(int i=1;i<n;i++){
      diff=prices[i]-mini;
      if(diff>max_pr){
          max_pr=diff;
      }
      mini=min(mini,prices[i]);
      
    }
    return max_pr;
}
//TIME COMPLLEXITY:O(N);
