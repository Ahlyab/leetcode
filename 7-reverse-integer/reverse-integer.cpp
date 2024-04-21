class Solution {
public:
    int reverse(int x) {
        int res = 0;
        bool neg = false;

        if(x < 0) {
            neg = true;
            x = abs(x);
        }
        try{
            while(x > 0) {
                res += x%10;
                if(x > 9) {
                    if((long)res*10 > INT_MAX){
                        return 0;
                    }else{
                        res *= 10;
                    }
                    
                }
                x /= 10;
            }
        }catch(...){
            return 0;
        }
        
        return (neg)? res * -1 : res;
    }
};