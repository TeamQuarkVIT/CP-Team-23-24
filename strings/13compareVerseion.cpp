class Solution {
public:
    int compareVersion(string version1, string version2) {
    int i = 0; 
    int j = 0;
    int n1 = version1.size(); 
    int n2 = version2.size();
    
    long long n1 = 0;
    long long n2 = 0;
    while(i<n1 || j<n2)
    {
        while(i<n1 && version1[i]!='.'){
            n1 = n1*10+ (long long)(version1[i]-'0');
            i++;
        }
        
        while(j<n2 && version2[j]!='.'){
            n2 = n2*10+ (long long)(version2[j]-'0');;
            j++;
        }
        
        if(n1>n2) return 1;
        else if(n1 < n2) return -1;
        
        n1 = 0;
        n2 = 0;
        i++;
        j++;
    }
    
    return 0;
}
};