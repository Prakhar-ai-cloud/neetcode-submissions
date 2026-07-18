class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int leftmax=0;
        vector<int> premax(n,0);
        for(int i=0;i<n;i++){
            leftmax = max(height[i],leftmax);
            premax[i] = leftmax;
        }
        int rightmax=0;
        vector<int> postmax(n,0);
        for(int i= n-1;i>=0;i--){
            rightmax=max(rightmax,height[i]);
            postmax[i]=rightmax;
        }
        int water=0;
        for(int i=0;i<n;i++){
            water+= min(premax[i],postmax[i])-height[i];
    
        }
        return water;
    }
};
