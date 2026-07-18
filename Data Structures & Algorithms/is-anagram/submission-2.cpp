
class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns = s.size();
        int nt = t.size();
        unordered_map<int,int> a;
        for(int i=0;i<ns;i++){
            a[s[i]]++;
        }
        unordered_map<int,int> b;
        for(int i=0;i<nt;i++){
            b[t[i]]++;
        }
        if(a==b) return true;
        return false;
    }
};
