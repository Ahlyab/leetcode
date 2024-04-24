class Solution {
public:
    int tribonacci(int n) {
        if (n == 2 || n == 1)
            return 1;
        if (n <= 0)
            return 0;

        int a = 0, b = 1, c = 1, d = 0;

        for(int i=3; i <= n; ++i) {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }

        return d;



        // return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};