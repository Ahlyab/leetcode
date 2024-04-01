class Solution {
public:
    int thirdMax(vector<int>& nums) {
        

        set<int> numbers (nums.begin(), nums.end());

        for(int n : numbers) {
            cout << n << " ";
        }

        if(numbers.size() < 3) {
            int i=0;
            for(int n : numbers) {
                if(i==numbers.size()-1) {
                    return n;
                }
                ++i;
            }
        }

        int i = 0;
        int t = numbers.size() - 3;

        for(int n : numbers) {
            if(i == t) {
                return n;
            }
            ++i;
        }
        return 0;
    }
};