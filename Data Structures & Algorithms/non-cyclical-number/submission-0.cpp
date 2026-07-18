class Solution {
public:
    int square(int n){
        int a = n;
        int sum = 0;
        while(a>0){
            int temp = a%10;
            sum += temp*temp;
            a/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        int a = n;
        while(a!=1){
            int temp = square(a);
            if(mp.count(temp)) return false;
            mp[temp]++;
            if(temp==1) return true;
            a = temp;
        }
        return true;
    }
};
