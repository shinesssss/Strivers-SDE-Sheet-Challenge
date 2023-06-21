
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
   // vector<pair<int,int>>v;
   
    sort(at,at+n);
    sort(dt,dt+n);
   int pc=1;
   int i=1;
   int j=0;
   while(i<n){
       if(at[i]>dt[j]){
           j++;

       }else {
           pc++;
       }
           i++;
       
   }
   return pc;
}