class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> table;
        int max = INT_MIN;

        for(int i=0; i<nums.size(); ++i) {
            table[nums[i]]++;
            if(table[nums[i]] > max) {
                max = table[nums[i]];
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