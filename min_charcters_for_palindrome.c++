int minCharsforPalindrome(string str) {
	// Write your code here.
	int i=0;
	int j=str.length()-1;
	int count=0;
	int tempj=j;
	while(i<j){
		if(str[i]==str[j]){
		//	continue;
			i++;
			j--;
		}else {
			count++;
			i=0;
			tempj--;
			j=tempj;
		}
	}
	return count;
}