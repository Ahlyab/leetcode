class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long l = 0, r = 0, res = 0, total = 0;

        while(r < nums.size()) {
            total += nums[r];
            while(nums[r] * (r-l+1) > total + k) {
                total -= nums[l];
                l+=1;
            }
            res = max(res, r-l+1);
            r += 1;
        }
        return res;
    }
};