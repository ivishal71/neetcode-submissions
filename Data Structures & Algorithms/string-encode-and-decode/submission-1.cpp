class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string num: strs){
            ans += to_string(num.size());
            ans+='#';
            ans += num;
        }
        return ans;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0; 
        while(i<s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, j-i));
            j++;
            ans.push_back(s.substr(j, len));
            i = j+len;

        }
        return ans;

    }
};
