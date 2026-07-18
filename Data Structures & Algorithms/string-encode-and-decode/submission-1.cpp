class Solution {
public:

    string encode(vector<string>& strs) {
        if(!strs.size()) return "";
        string encoded_string;
        int n = strs.size();
        if(n<10){
            encoded_string += '0';
        }
        encoded_string += to_string(n);
        for(int i=0;i<n;i++){
            int m = strs[i].size();
            if(m<100) encoded_string += '0';
            if(m<10) encoded_string += '0';
            encoded_string += to_string(m);
        }
        for(int i=0;i<n;i++){
            encoded_string+= strs[i];
        }
        return encoded_string;
    }

   

    vector<string> decode(string s) {
       
        vector<string> decoded;
        if(s.empty()) return decoded;
        vector<int> master;
        int number = stoi(s.substr(0,2));
        s.erase(0,2);
        while(master.size()<number){
            master.push_back(stoi(s.substr(0,3)));
            s.erase(0,3);
        }
        int m = master.size();
        for(int i=0;i<m;i++){
            string temp = s.substr(0,master[i]);
            s.erase(0,master[i]);
            decoded.push_back(temp);
        }
        
        return decoded;
    }
};
