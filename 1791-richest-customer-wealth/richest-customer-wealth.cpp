class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for(int i=0; i<accounts.size(); ++i) {
            int sum = getSum(accounts[i]);

            res = (sum > res)? sum : res;
        }

        return res;
    }

    int getSum(vector<int> account)  {
        int sum = 0;

        for(int i=0; i<account.size(); ++i) {
            sum += account[i];
        }
        return sum;
    }
};