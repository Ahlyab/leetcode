class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int array[101]  {0};
        int max = nums[0];
        int min = nums[0];
        for(int i=0; i<nums.size(); ++i) {
            ++array[nums[i]];
            if(nums[i] > max) {
                max = nums[i];
            }
            if(nums[i] < min) {
                min = nums[i];
            }
        }

        vector<int> result;
        for(int i=min; i<=max; ++i) {
            if(array[i] == 0) {
                result.push_back(i);
            }
        }

        return result;
    }
};