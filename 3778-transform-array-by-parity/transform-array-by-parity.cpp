class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int evenNumbers = 0;

        for(int i=0; i<nums.size(); ++i) {
            if(nums[i]%2==0) ++evenNumbers;
        }

        vector<int> result(evenNumbers, 0);

        for(int i=0; i<nums.size() - evenNumbers; ++i) {
            result.push_back(1);
        }

        return result;
    }
};