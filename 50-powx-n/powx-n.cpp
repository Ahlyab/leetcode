class Solution {
public:
    double myPow(double x, int n) {
        if( n < 0) {
           double res =  helper(x, static_cast<long>(abs(n)));
           return 1 / res;
        }
        return helper(x, n);
    }

    double helper(double x, long n) {
        if(n==0)
            return 1;
        if(n%2==0)
            return helper(x*x, n/2);
        
        return x * helper(x*x, (n-1)/2);
    }
};