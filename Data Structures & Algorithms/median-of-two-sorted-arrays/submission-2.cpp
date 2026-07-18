class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> final;

        int it1=0;
        int it2=0;
        while(it1<n && it2 < m){
            if(nums1[it1]>=nums2[it2]){
                final.push_back(nums2[it2]);
                it2++;
            }
            else{
                final.push_back(nums1[it1]);
                it1++;
            }
        }
        if(it1<n){
            while(it1<n){
                final.push_back(nums1[it1]);
                it1++;
            }
        }
        if(it2<m){
            while(it2<m){
                final.push_back(nums2[it2]);
                it2++;
            }
        }

        int me = final.size();
        if(me%2==1) return final[me/2];
        double answer = (final[me/2]+final[(me/2)-1]);
        return answer/2.0;
    }
};
