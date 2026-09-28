class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> result;

        for(int i=0; i<nums.size(); ++i) {
            int leftTemp = sumLeft(i, nums);
            int rightTemp = sumRight(i, nums);
            cout << leftTemp << " | " << rightTemp << endl;
            result.push_back(abs(leftTemp - rightTemp));
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