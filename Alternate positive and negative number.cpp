class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> pos, neg;
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] >= 0)
	        {
	            pos.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    if(pos.size() != 0 && neg.size() != 0)
	    {
	        int i = 0, j = 0, k = 0;
	        while((j < pos.size()) && (k < neg.size()))
	        {
	            arr[i++] = pos[j++];
	            arr[i++] = neg[k++];
	        }
	        while(j < pos.size())
	        {
	            arr[i++] = pos[j++];
	        }
	        while(k < neg.size())
	        {
	            arr[i++] = neg[k++];
	        }
	    }
	}
};