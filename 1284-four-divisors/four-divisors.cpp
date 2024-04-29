class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] >= 6) {
                res += getDivisors(nums[i]);
            }
        }
        return res;
    }

    int getDivisors(const int &num) {
        int count = 2;
        int result = 1 + num; // 1 and num are always divisors

        for(int i=2; i*i<=num; ++i) {
            if(num%i == 0) {
                if(i*i == num) { // num is a perfect square
                    result += i;
                    ++count;
                } else { // num has two distinct divisors i and num/i
                    result += i + num/i;
                    count += 2;
                }

                if(count > 4) {
                    return 0; // Early exit if more than 4 divisors found
                }
            }
        }

        if(count == 4) {
            return result;
        }

        return 0;
    }
};