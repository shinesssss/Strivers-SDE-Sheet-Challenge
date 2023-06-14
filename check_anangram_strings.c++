#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    map<char,int>m1;
    map<char,int>m2;
    int n=str1.length();
    int m=str2.length();
    if(n!=m){
        return false;
    }
    for(int i=0;i<n;i++){
        m1[str1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(m1.find(str2[i])!=m1.end()){
            m1[str2[i]]--;
        }else {
            return false;
        }
    }
    return true;
}
//time complexity:0(Nlogm)+o(m) //ordered_map
//space complexity=0(n)