//recursion
//pick or not pick
//time complexity:exponential(2^n);
void subset(vector<int>&num,vector<int>&ans,int i,int sum,int n)
{
    if(i>=n){
        ans.push_back(sum);
        return;
            }
            sum=sum+num[i];
            subset(num,ans,i+1,sum,n);
            sum=sum-num[i];
            subset(num,ans,i+1,sum,n);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n=num.size();
    int i=0;
    vector<int>ans;
    int sum=0;
    subset(num,ans,i,sum,n);
    sort(ans.begin(),ans.end());
    return ans;
}