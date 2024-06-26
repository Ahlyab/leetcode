class Solution {
public:
    int arrangeCoins(int n) {
        int num = n;
        for(int i=1; i<=num; ++i) {
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