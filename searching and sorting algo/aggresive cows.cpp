bool isPossible(vector<int> &stalls, int minDist, int k){ 
    int lastPosition=stalls[0];
    int cows=1;
    for(int i=1;i<stalls.size();i++)
    {
        if(stalls[i]-lastPosition>=minDist){
            cows++;
            lastPosition=stalls[i];
            if(cows>=k)
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int s=1,e=stalls[n-1]-stalls[0];         
    int res;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(isPossible(stalls,mid,k))
        {
            res=mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    return res;
}