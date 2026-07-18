class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
           int n=nums.size(); 
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        
        int max=0;
        for(auto i:map){
            if(i.second>=max){
                max=i.second;
            }
        }
        vector<int> soln;
        int counter = 0;
        while(counter<k){
            for(auto i:map){
                if(i.second==max){
                    soln.emplace_back(i.first);
                    counter++;
                }
            }
            max--;
        }

        return soln;
    }
};
