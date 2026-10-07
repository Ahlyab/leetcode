class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0, sumEven = 0;

        for(int i=2, j=1, k=1; k<=n; ++k) {
            sumEven += i;
            sumOdd += j;
            i+=2; j+=2;
        }

        return gcd(sumOdd, sumEven);

        
    }
};