class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>res;

        for(vector<int> &query : queries) {
            int temp = arr[query[0]];

            for(int i = query[0] + 1; i<= query[1]; ++i) {
                temp = temp xor arr[i];
            }
            res.push_back(temp);
        }

        return res;
    }
};