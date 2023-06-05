//brut force approach
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=0;
	int j=0;
vector<int>arr3;
while(i<m && j<n){
	if(arr1[i]>arr2[j]){
		arr3.push_back(arr2[j]);
		j++;
	}else {
		arr3.push_back(arr1[i]);
		i++;
		
	}
}
while(i<m){
	arr3.push_back(arr1[i]);
	i++;
}

while(j<n){
	arr3.push_back(arr2[j]);
	j++;
}
return arr3;
}
//time complexity:0(max(n,m));
//space complexity:0(n+m);


//TWO -POINTER APPROACH
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(j>=0){
		if(arr1[i]>arr2[j] && i>=0){
			arr1[k--]=arr1[i--];
		}else {
			arr1[k--]=arr2[j--];
		}
	}
	return arr1;
}