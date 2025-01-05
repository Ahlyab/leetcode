class Solution {
public:
    int smallestNumber(int n) {
        string res = "";

        while(n > 0) {
            res += to_string(n%2);
            n /= 2;
        }
        int result = 0;
        int c = 1;
        for(int i=1; i<=res.size(); ++i) {
            result += c;
            c *=2;
        }

        return result;


    }
};