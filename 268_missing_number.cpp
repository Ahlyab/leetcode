class Solution {
public:
    int missingNumber(vector<int>& nums) {

        if(nums.size()==1 && nums[0]==1) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int n = 0;
        for(int i=1; i<nums.size(); ++i) {
            if(nums[i] - nums[i-1] != 1) {
                n = nums[i-1] + 1;
                break;
            }
        }

        return (n==0)? nums.size() : n;
    }
};
