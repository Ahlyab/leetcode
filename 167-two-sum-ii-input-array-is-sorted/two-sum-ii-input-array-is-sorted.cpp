class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;

        int s = 0;
        int e = numbers.size()-1;

        while(s < e) {
            int result = numbers[s] + numbers[e];
            if(result == target) {
                res.push_back(s + 1);
                res.push_back(e + 1);
                break;
            }else if( result > target) {
                --e;
            }else if(result < target) {
                ++s;
            }
        }
        return res;
    }
};