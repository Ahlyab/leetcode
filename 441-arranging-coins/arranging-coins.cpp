class Solution {
public:
    int arrangeCoins(int n) {
        for(int i=2; i<=n; ++i) {
            long res = (long)i*((long)i+1)/2;
            if(res > n) {
                return i-1;
            }else if(res == n) {
                return i;
            }
        }

        return 1;
    }
};