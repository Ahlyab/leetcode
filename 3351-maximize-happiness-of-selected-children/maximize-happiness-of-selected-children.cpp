class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long max = 0;

        for(int i=0, j=happiness.size()-1; i<k; ++i, --j) {
            if(happiness[j] - i > 0) {
                max += happiness[j] - i;
            }
        }
        return max;
    }
};