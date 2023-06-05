//brute-force approach
// #include<set>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	//brute -force approacj
	set<int>s;
	for(int i=0;i<n;i++){
s.insert(arr[i]);
	}
	return s.size();
}
TC:0(NlogM);
SC-O(M);
//optimal approach
//using 2 pointer approach
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.

int i=0;
int j=1;

while(j<n){
	if(arr[j]!=arr[i]){
		i++;
		arr[i]=arr[j];
		
		j++;
	}else {
		j++;
	}
	
}
return i+1;
}