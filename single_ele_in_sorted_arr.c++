int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n=arr.size();
	if(n==1){
		return arr[0];
	}
	
	int i=0;
	int j=arr.size()-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
			return arr[mid];
		}
		if(mid%2==1 && arr[mid]==arr[mid-1] ||(mid%2==0 && arr[mid]==arr[mid+1])){
			i=mid+1;
		}else {
			j=mid-1;
		}
	}
	return -1;
}