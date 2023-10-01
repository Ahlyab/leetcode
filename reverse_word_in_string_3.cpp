class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int curr = 0;
        for(int i=0; i<s.size(); ++i) {
            if(s[i] == ' ') {
                
                for(int j=i-1; j >=curr ; --j) {
                    res += s[j];
                }
                res += s[i];
                curr  = i+1;

            }
        }

        for(int i = s.size()-1; i >= curr; --i){
            res += s[i];
        }

        return res;
    }
};
