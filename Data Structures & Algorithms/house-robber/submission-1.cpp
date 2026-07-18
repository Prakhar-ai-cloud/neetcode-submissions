class Solution {
public:
    int dp(int n , vector<int>& dp_vis , vector<int>& nums){
        if( n==0) return nums[0];
        if( n==1) return max(nums[0],nums[1]);
        if(n<0) return 0;

        if(dp_vis[n]!=-1) return dp_vis[n];
        dp_vis[n] = max(nums[n]+dp(n-2,dp_vis,nums),dp(n-1,dp_vis,nums));
        return dp_vis[n];

    }
    int rob(vector<int>& nums) {
        vector<int> dp_vis(nums.size(),-1);
        return dp(nums.size()-1,dp_vis,nums);
    }
};
