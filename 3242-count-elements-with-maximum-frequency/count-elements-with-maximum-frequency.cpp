class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> table;

        for(int i=0; i<nums.size(); ++i) {
            table[nums[i]]++;
        }

        int max = INT_MIN;

        for (auto& iter: table) {
            if(iter.second > max) {
                max = iter.second;
            }
        }

        int res = 0;
        for (auto& iter: table) {
            if(iter.second == max) {
                res += iter.second;
            }
        }
        return res;
  	} 
};