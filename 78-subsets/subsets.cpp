class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::vector<int> subset;

        std::function<void(int)> dfs = [&](int i) {
            if (i >= nums.size()) {
                res.push_back(subset);
                return;
            }

            subset.push_back(nums[i]);
            dfs(i + 1);

            subset.pop_back();
            dfs(i + 1);
        };

        dfs(0);
        return res;
    }

    void dfs(vector<int>&nums, int i, vector<vector<int>> &subset, vector<vector<int>> res) {
        if(i >= nums.size()) {
            res.clear();
            res = subset;
            return;
        }

        subset[i].push_back(nums[i]);
        dfs(nums, i+1, subset, res);
        
        subset[i].pop_back();
        dfs(nums, i+1, subset, res);

    }
};