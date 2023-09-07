long long int findSubarray(vector<long long int> &arr, int n ) {
        int count=0, prefix=0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            prefix += arr[i];
            count +=mp[prefix];
            mp[prefix]+=1;
        }
        return count;
    }