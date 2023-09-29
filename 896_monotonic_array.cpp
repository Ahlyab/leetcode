class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool assen = false, desenc = false;

        for(int i=0; i<nums.size()-1; ++i) {
            if(nums[i] > nums[i+1]) {
                desenc = true;
            }else if(nums[i] < nums[i+1]) {
                assen = true;
            }
        }

        return !(assen && desenc);
    }

};
