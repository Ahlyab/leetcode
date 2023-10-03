class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n < 1) {
            return false;
        }
        unsigned long long i = 1;

        while(i<n) {
            i *= 4; 
        }

        return i==n;
    }
};
