class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_set<char> set;
            int count = 0;
            for(int j = i;j<n;j++){
                if(set.count(s[j])){
                    break;
                }
                else{
                    count++;
                    set.insert(s[j]);
                    ans = max(ans,count);
                }
            }
        }
        return ans;
    }
};