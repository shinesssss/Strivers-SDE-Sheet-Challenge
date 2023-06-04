#include <bits/stdc++.h> 
void swap(int &a,int &b){
   int temp=a;
   a=b;
   b=temp;
}
void sort012(int *arr, int n)
{
   //   Write your code her
   int mid=0;
   int high=n-1;
   int low=0;
   while(mid<=high){
      if(arr[mid]==0){
         swap(arr[low],arr[mid]);
         low++;
         mid++;
      }else if(arr[mid]==1){
         mid++;
      }else {
         swap(arr[mid],arr[high]);
         high--;
      }
   }
   
}