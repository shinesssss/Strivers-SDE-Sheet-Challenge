long getTrappedWater(long *arr, int n){
    // Write your code here.
    long left[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    long right[n];
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    long c=0;
    for(int i=1;i<n-1;i++){
        c=c+((min(left[i],right[i]))-arr[i]);
    }
    return c;
}
//time complexity:0(3N)
//space complexity:0(2N)
