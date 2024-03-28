class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() < 3) {
            return -1;
        }
        int max = INT_MIN, min = INT_MAX;

        for(int i=0; i < nums.size(); ++i) {
            if(nums[i] > max) {
                max = nums[i];
            }
            if(nums[i] < min) {
                min = nums[i];
            }
        }

        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] != min && nums[i] != max) {
                return nums[i];
            }
        }

        return nums[1];
    }
};