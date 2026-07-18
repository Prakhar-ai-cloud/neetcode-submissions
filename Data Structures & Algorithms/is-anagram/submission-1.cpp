#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int compareInts(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}
class Solution {
public:
    bool isAnagram(string s, string t) {
        int counter=0;
        int n = s.size();
        int m = t.size();
        if(n!=m){
            return false;
        }
        
            qsort(&s[0],n,sizeof(char),compareInts);
            qsort(&t[0],m,sizeof(char),compareInts);
            for(int i=0;i<n;i++){
                if(s[i]==t[i]){
                    counter++;
                }
                else{
                    counter = 0;
                    break;
                }
            }
            if(counter==n){
                return true;
            }
            else{
                return false;
            }
        
    }
};
