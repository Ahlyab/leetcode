class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> result;

        for(int n : nums) {
           result.push_back(sumOfDigits(n));
        }

        return *std::min_element(result.begin(), result.end());;
    }


    int sumOfDigits(int num) {
        int sum = 0;
        
        // Handle negative numbers if necessary
        num = abs(num); 
        
        while (num > 0) {
            sum += num % 10;   // Extract the last digit
            num /= 10;         // Remove the last digit
        }
        return sum;
}

};