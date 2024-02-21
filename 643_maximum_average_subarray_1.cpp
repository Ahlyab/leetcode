class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double max = 0.0;
        int sum = 0;
        for (int i = 0; i < k; ++i)
        {
            sum += nums[i];
        }

        max = sum / (double)k;

        for (int i = k; i < nums.size(); ++i)
        {
            sum -= nums[i - k];
            sum += nums[i];
            double temp = sum / (double)k;

            max = (temp > max) ? temp : max;
        }

        return max;
    }
};