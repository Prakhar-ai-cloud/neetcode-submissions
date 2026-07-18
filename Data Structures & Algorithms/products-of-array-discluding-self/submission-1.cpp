class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    int product=1;
    int zero_count=0;
    for( vector<int>::iterator i=nums.begin();i!=nums.end();i++){
        if(*(i)!=0){
            product = product * *(i);
        }
        else{
            zero_count++;
        }
    }
    vector<int> soln;
    for(auto i=nums.begin();i!=nums.end();i++){
        if(zero_count >=2){
            soln.emplace_back(0);
            }
        else if(zero_count==1){
            if(*(i)==0){
                soln.emplace_back(product);
            }
            else{
                soln.emplace_back(0);
            }
            }
        else{
            soln.emplace_back(product/ *(i));
            }
        }
            return soln;

    }
       
};
