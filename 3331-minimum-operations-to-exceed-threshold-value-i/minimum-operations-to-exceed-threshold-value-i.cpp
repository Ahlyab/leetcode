class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int r = -1;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] == k || nums[i] >= k) {
                r = i;
                break;
            }
        }

        return r;
    }
};