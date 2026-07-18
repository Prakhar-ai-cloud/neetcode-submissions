class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int n=numbers.size();
        int r=n-1;
        vector<int> soln;
        while(r<n){
        int sum = numbers[l]+numbers[r];
            if(sum==target){
                soln.emplace_back(l+1);
                soln.emplace_back(r+1);
                break;         
            }
            else if(sum<target){
                l++;
            }
            else{
                r--;
            }
        }
        return soln;
    
    }
};
