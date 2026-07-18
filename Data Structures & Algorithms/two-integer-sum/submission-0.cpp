#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
   vector<int> twoSum( vector<int>& nums, int target) {
        int n= nums.size();
          int sum=0;
          int fi,si;
    for(int i=0;i<n;i++){   
        for(int j=i+1;j<n;j++){
            sum = nums[i]+nums[j];
            if(sum == target){
                fi=i;
                si=j;
                return {fi,si};
                }
            }
        }
    }
};
