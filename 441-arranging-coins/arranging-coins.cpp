class Solution {
public:
    int arrangeCoins(int n) {
        int num = n;
        for(int i=1; i<=num; ++i) {
            // long res = (long)i*((long)i+1)/2;
            // if(res > n) {
            //     return i-1;
            // }else if(res == n) {
            //     return i;
            // }
            if(n < 0) {
                return i-2;
            }else if(n==0){
                return i-1;
            }
            n -= i;
        }
        return 1;
    }
};