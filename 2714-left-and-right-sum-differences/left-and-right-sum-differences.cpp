class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> result;

        for(int i=0; i<nums.size(); ++i) {
            result.push_back(abs(sumLeft(i, nums) - sumRight(i, nums)));
        }

        return result;
    }

    int sumLeft(int start, vector<int>& nums) {
        int sum = 0;
        for(int i=start-1; i>=0; --i) {
            sum += nums[i];
        }

        return sum;
    }

    int sumRight(int start, vector<int>& nums) {
        int sum=0;
        for(int i=start+1; i<nums.size(); ++i) {
            sum += nums[i];
        }
        return sum;
    }
};