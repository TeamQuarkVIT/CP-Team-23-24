void solve(vector<int> arr, int N, vector<int>& ans,int index,int sum){
        if(index>=N){
            ans.push_back(sum);
            return;
        }
        solve(arr,N,ans,index+1,sum);
        sum+=arr[index];
        solve(arr,N,ans,index+1,sum);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum=0,index=0;
        vector<int> ans;
        solve(arr,N,ans,index,sum); 
        return ans;
    }