int minmax(){
	int maxi=INT_MIN;
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]>maxi){
			maxi=arr[i];
		}
		if(arr[i]<mini){
			mini=arr[i];
		}
	}
	return make_pair(maxi,mini);
}
