#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int c=1;
    int maxi=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++)
    {
        if(i>0 &&arr[i]==arr[i-1]) {
            continue;
        }
        if(arr[i]==arr[i-1]+1){
            c++;
        }else {
            c=1;
        }
            maxi=max(maxi,c);
            
            
        
    }
    return maxi;
}