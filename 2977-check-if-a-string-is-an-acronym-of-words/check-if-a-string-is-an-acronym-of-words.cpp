class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        // string res = "";
        // for(int i=0; i<words.size(); ++i) {
        //     res += words[i][0];
        // }
        if(s.size() != words.size()) {
            return false;
        }
        int i=0;
        for(; i<s.size(); ++i) {
            if(s[i] != words[i][0]) {
                return false;
            }
        }

        return i == words.size();
    }
};