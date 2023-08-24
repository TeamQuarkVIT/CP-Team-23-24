int reverse(){
	int start=0;
	int end=m;
	int temp;
	while(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
	start++;
	end--;
}
}
