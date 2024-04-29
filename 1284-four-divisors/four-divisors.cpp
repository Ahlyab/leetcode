class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        vector<int> divisors;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] >= 6) {
                cout << nums[i] << " : ";
                divisors = getDivisors(nums[i]);
            }

            if(divisors.size() == 4) {
                for(int j=0; j<4; ++j) {
                    cout << divisors[j] << " ";
                    res += divisors[j];
                }
                divisors.clear();
            }
            cout << endl;
        }
        return res;
    }

    vector<int> getDivisors(const int &num) {
        vector<int> res = {1, num};
        int count = 2;

        for(int i=2; i<=num/2; ++i) {
            if(num%i == 0) {
                ++count;
                res.push_back(i);
            }

            if(count > 4) {
                break;
            }
        }

        return res;
    }
};