class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
                return true;
            }
        }
        if(count == 0){
            return false;
        }
    }
};