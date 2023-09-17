class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.size(); ++i) {
            if(!isalpha(s[i]) && !isdigit(s[i])) {
                s[i] = ' ';
            }
            s[i] = tolower(s[i]);
        }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        string rev =s;
        reverse(rev.begin(), rev.end());
        return s == rev;
    }
};