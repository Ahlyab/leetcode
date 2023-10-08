class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;

        for(int i=0, j=n; j<nums.size(); ++i) {
            res.push_back(nums[i]);
            res.push_back(nums[j]);
            ++j;
        }

        return res;
    }
};
