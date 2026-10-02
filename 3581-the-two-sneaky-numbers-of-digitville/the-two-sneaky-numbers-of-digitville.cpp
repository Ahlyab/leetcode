class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int max = nums[0];

        for(int i=1; i<nums.size(); ++i) {
            if(nums[i] > max) max=nums[i];
        }

        int array[100] = {0};

        for(int n : nums) {
            ++array[n];
        }

        vector<int>result;

        for(int i=0; i<100; ++i) {
            if(array[i] == 2) {
                result.push_back(i);
            }
        }

        return result;

    }
};