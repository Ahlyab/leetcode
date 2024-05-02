#include <cmath>
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int> n;

        for(int i=0; i<nums.size(); ++i) {
            if(doesNegativeExist(nums, nums[i])) {
                n.insert(pair<int, int>(abs(nums[i]), nums[i]*(-1)));
            }
        }

        return n.size() == 0? -1 : (--n.end())->first;
    }

    bool doesNegativeExist(vector<int>& nums, int num) {
        num = num * -1;
        
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] == num){
                return true;
            }
        }

        return false;
    }
};