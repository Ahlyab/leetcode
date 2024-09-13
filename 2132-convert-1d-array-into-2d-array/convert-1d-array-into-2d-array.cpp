class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) {
            return {};
        } 
        
        vector<vector<int>> res(m, vector<int>(n,0));
        int i=0;

        for(int j=0; j<m; ++j) {
            for(int k=0; k<n; ++k) {
                res[j][k] = original[i];
                ++i;
            }
        }
        return res;
    }
};