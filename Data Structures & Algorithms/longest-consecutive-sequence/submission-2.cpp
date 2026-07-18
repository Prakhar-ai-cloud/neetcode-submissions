
class Solution {
     
public:
    int longestConsecutive(vector<int>& nums) {
      int n=nums.size();
      if(n==0) return 0;
      sort(nums.begin(),nums.end());
      int max_count=0;
      int counter = 1;
      for(int i=0;i<n-1;i++){
        if(nums[i+1]-nums[i]==1){
            counter++;
        }
        else if(nums[i+1]==nums[i]) continue;
        else{
            if(counter>max_count){
                max_count=counter;
            }
            counter = 1;
            
            continue;
        }
      }
      max_count = max(max_count,counter);
      return max_count;
        
    }
};
