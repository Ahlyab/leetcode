class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> numbers;

        for(int i=0; i<nums.size(); ++i) {
            numbers[nums[i]] +=1;
        }

        pair<int, int> max(INT_MIN, INT_MIN);

        for(const pair<int, int> &number : numbers) {
            if(number.second > max.second ) {
                max.first  = number.first;
                max.second = number.second;
            }
        }

        return max.first;

        
    }
};
