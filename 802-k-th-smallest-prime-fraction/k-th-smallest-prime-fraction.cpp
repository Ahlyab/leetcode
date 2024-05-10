class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        

        map<double, vector<int>> record;

        for(int i=0;i<arr.size(); ++i) {
            for(int j=0; j<i; ++j) {
                double id = (double)arr[j]/arr[i];
                record[id] = vector<int>{arr[j], arr[i]};
            }
        }

        int i = 0;

        for(auto value : record) {
            ++i;
            if(i == k) {
                return value.second;
            }
        }
        return arr;
    }
};