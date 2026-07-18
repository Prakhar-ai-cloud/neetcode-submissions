class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int postmax = 0;
        vector<int> post(n);
        for(int i=n-1;i>=0;i--){
            post[i] = max(prices[i],postmax);
            postmax = post[i];
        }
        int result = 0;
        for(int i=0;i<n;i++){
            result = max(result,post[i]-prices[i]);
        }
        return result;
    }
};
