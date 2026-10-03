class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count =0;

        for(int n: nums) {
            int mod = n%3;
            int nToAdd = 3 - mod;
            count += min(mod, nToAdd);
        }

        return count;
    }
};
