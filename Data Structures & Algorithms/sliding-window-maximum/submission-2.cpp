class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==1) return nums;
        int left = 0;
        int right = k-1;
        int maxed = INT_MIN;
        vector<int> answer;
        for(int i=0;i<k;i++){
            maxed = max(maxed,nums[i]);
        }
        answer.push_back(maxed);
        while(right<n-1){
            if(nums[left]==maxed){
                left ++;
                right++;
                maxed = INT_MIN;
                for(int i=left ; i<=right ; i++){
                    maxed = max(maxed,nums[i]);
                }
                answer.push_back(maxed);
            }
            else{
                left++;
                right++;
                maxed = max(maxed,nums[right]);
                answer.push_back(maxed);
            }
        }
        return answer;
    }
};
