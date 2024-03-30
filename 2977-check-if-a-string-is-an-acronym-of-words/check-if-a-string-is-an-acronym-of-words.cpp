class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        // string res = "";
        // for(int i=0; i<words.size(); ++i) {
        //     res += words[i][0];
        // }
        int ws = words.size();
        int ss = s.size();
        if(ss != ws) {
            return false;
        }
        int i=0;
        for(; i<ss; ++i) {
            if(s[i] != words[i][0]) {
                return false;
            }
        }

        return i == ws;
    }
};