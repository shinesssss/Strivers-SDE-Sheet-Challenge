#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int i=0;
    int n=input.length();
    int j=0;
    map<char,int>m;
    int maxi=0;
    while(j<n){
      m[input[j]]++;
      

      if(input[j]>1){
      while(m[input[j]]>1){
          m[input[i]]--;
          i++;
      }
      maxi=max(maxi,j-i+1);
      }
      j++;
      maxi=max(maxi,j-i);
    }
    return maxi;
}