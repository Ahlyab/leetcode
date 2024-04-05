class Solution {
public:
    bool isThree(int n) {
        int c = 2;
        int s = n/2;
        for(int i=2; i<=s; ++i) {
            if(n%i==0) {
                ++c;
            }
        }
        return c==3;
    }
};