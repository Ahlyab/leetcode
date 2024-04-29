class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        vector<int> divisors;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] >= 6) {
                res += getDivisors(nums[i]);
            }
        }
        return res;
    }

    int getDivisors(const int &num) {
        vector<int> res = {1, num};
        int count = 2;
        int result = 0;

        for(int i=2; i<=num/2; ++i) {
            if(num%i == 0) {
                ++count;
                res.push_back(i);
            }

            if(count > 4) {
                break;
            }
        }

        if(res.size() == 4) {
            for(int i=0; i<4; ++i) {
                result += res[i];
            }
            return result;
        }

        return 0;
    }
};