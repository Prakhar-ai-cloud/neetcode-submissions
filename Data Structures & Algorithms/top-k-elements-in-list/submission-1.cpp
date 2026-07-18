class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size(); 
        int hash[2000]={0};
        for(vector<int>::iterator i=nums.begin();i!=nums.end();i++){
            hash[*(i)+1000] +=1;
        }
        int max=-999;
        for(int i=0;i<2000;i++){
            if(hash[i]>=max){
                max = hash[i];
            }
        }
        vector<int> soln;
        int counter=0;
      while(counter<k){
        for(int i=0;i<2000;i++){
            if(hash[i]==max) {
            soln.emplace_back(i-1000);
            counter ++;
        }
        }
        max--;
        }
        return soln;
    }
};
