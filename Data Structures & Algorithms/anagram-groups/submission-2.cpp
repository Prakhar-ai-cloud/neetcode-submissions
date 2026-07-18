class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> mp;
        int n = strs.size();
        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
        vector<vector<string>> answer;
        for (auto& it : mp) {
            vector<int> key = it.second;
            vector<string> str;
            for (int i = 0; i < key.size(); i++) {
                str.push_back(strs[key[i]]);
            }
            answer.push_back(str);
        }
        return answer;
    }
};
