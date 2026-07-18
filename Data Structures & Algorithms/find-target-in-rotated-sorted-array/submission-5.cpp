class Solution {
public:
    int search(vector<int>& nums, int target) {
        // one of the half either left or right has to be sorted. 
        int left = 0;
        int right = nums.size()-1;

        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target) return mid;
            if(nums[left] == target) return left;
            if(nums[right]==target) return right;
 
            if(nums[left] <= nums[mid]){ // left side is sorted
                if(target >=nums[left] && target <= nums[mid]){
                    right = mid-1;
                }
                else left = mid+1;
            }

           else if(nums[right]>=nums[mid]){ // right side is sorted
                if(target >= nums[mid] && target <= nums[right]){
                    left = mid+1;
                }
                else right = mid-1;
            }
        }//while end
        return -1;
    }
};
