//brute force approah:
//using map
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int ,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	int size=n/2;
	for(auto it:m){
		if(it.second>(n/2)){
			return it.first;
		}
	}
	return -1;
}

//optimal solution- moore's voting algorithm
int findMajorityElement(int arr[], int n) {
	// Write your code here
	int cnt=0;
	int ele=0;
	for(int i=0;i<n;i++){
		if(cnt==0){
			ele=arr[i];
			cnt=1;
		}
		else if(arr[i]==ele){
			cnt++;
		}else {
			cnt--;
		}
	}
	//now verify them!
	int cnt1=0;
	for(int i=0;i<n;i++){
		if(arr[i]==ele){
			cnt1++;
		}
	}
	if(cnt1>(n/2)){
		return ele;
	}
	return -1;
	
}