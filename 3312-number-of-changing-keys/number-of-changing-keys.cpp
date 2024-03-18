class Solution {
public:
    int countKeyChanges(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int count = 0;
        char LU = s[0];
        for (char &c : s) {
            if (c != LU) {
                ++count;
                LU = c;
            }
        }

        return count;
    }
};