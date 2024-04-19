class Solution {
public:
    string convertToBase7(int num) {
        string res = "";
        bool isneg = false;

        if(num == 0) {
            return "0";
        }

        if(num < 0) {
            isneg = true;
            num = abs(num);
        }
        
        while(num >= 1) {
            res += to_string(num%7);
            num /= 7;
        }

        res = (isneg) ? res + "-" : res;
        reverse(res.begin(), res.end());
        
        return res;
    }
};