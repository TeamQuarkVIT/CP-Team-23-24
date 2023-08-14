class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        // O(m+n) time
        int p1=0;
        int p2=0;
        while(p1<nums1.size() && p2<nums2.size()){
            if(nums1[p1]<nums2[p2]){
                res.push_back(nums1[p1++]);
            }
            else if(nums1[p1] > nums2[p2]){  
                res.push_back(nums2[p2++]);
            }

            else{
                res.push_back(nums2[p2]);
                res.push_back(nums2[p2++]);
                p1++; 
            }   
        }

        // if(p1<nums1.size())

        while(p1<nums1.size()){
            res.push_back(nums1[p1++]);
        }
        
        while(p2<nums2.size()){
            res.push_back(nums2[p2++]);
        }
        // for(int i: res)cout<<i<<endl;
        return ( (double)res[res.size()/2] + (double)res[(res.size()-1)/2] ) / 2;

    }
};