
class Solution {
     
public:
    int longestConsecutive(vector<int>& nums) {
      int hash[2000000]={0};
    for(vector<int>::iterator i= nums.begin();i!=nums.end();i++){
        hash[*(i)+1000000] += 1;
    }
    for(int i=0;i<5;i++){
        cout << hash[i];
    }
    int n= sizeof(hash)/sizeof(int);
    int max_count=0;
    int counter=0;
    int reset=1;
    for(int i=0;i<n;i++){
        if(hash[i]!=0){
            counter++;
        }  
        else{
            if(counter>=max_count){
                max_count=counter;
            }
            counter =0;
        }
    }
    return max_count;
    }
};
