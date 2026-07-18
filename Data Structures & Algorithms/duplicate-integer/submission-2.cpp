class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==0||n==1) return false;
       unordered_map<int,int> map;
       for(int i=0;i<n;i++){
            map[nums[i]]++;
       }
       for(auto &i:map){
        if(i.second>1) return true;
       }
       return false;
    }
};