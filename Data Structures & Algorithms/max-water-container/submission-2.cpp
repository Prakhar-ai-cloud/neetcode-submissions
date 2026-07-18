class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        stack<int> st;
        st.push(0);

        while(left <right){
            int water = abs(right-left) * min(heights[left],heights[right]);
            if(water > st.top()) st.push(water);
            if(heights[left] <= heights[right]) left++;
            else right --;
        }
        return st.top();
    }
};
