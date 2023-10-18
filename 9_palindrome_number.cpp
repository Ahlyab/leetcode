class Solution {
public:
    bool isPalindrome(int n) {

        if(n < 0) {
            return false;
        }

        long reverse = 0;
        int temp = n;
        while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
        }
        return (reverse == n);
    }
};
