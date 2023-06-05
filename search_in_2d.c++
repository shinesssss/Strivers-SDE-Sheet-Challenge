//brute force 
//time complexity:0(n*m)
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(); //rows
        int m=mat[0].size(); //columns
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==target){
                    return true;
                }
            }
        }
        return false;
}

//optimal 
// as they are sorted
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(); //rows
        int m=mat[0].size(); //columns
      int i=0;
      int j=m-1;
      while(i<n && j>=0){
          if(mat[i][j]==target){
              return true;
          }else if(mat[i][j]>target){
              j--;
          }else {
              i++;
          }
          
      }
      return false;
}