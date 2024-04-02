class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int res = 0;

        for(int i=0; i<nums.size(); ++i) {
            if(nums.size()%(i+1)==0) {
                res += pow(nums[i], 2);
                // cout << nums[i] << endl;
            }
        }
        return res;
    }
};