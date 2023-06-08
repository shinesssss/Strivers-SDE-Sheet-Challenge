//first solution-using stl
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    next_permutation(permutation.begin(),permutation.end());
    return permutation;
}
//optimal solution
vector<int> nextPermutation(vector<int> &permutation, int n)
{
  vector<int>v;
  int inft=-1;
  for(int i=n-2;i>=0;i--){
      if(permutation[i]<permutation[i+1]){
          inft=i;
          break;
      }
  }
  if(inft==-1){
      reverse(permutation.begin(),permutation.end());
      return permutation;
  }
  for(int i=n-1;i>inft;i--){
      if(permutation[i]>permutation[inft]){
          swap(permutation[i],permutation[inft]);
          break;
      }
  }
  reverse(permutation.begin()+inft+1,permutation.end());
  return permutation;

}
//time complexitg=y:0(N)+o(N)+o(N);
//space complexity:0(1);(no extra space);