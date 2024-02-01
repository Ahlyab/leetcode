class Solution {
public:
    int addDigits(int num) {
        if(num >=0 && num <= 9) {
            return num;
        }
        int res = add(num);
        return addDigits(res);
    }

    int add(int num) {
        int res = 0;

        while(num > 0) {
            res += (num%10);
            num /= 10;
        }
        return res;
    }
};