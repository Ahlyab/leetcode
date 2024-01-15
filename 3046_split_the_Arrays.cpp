class Solution
{
public:
    bool isPossibleToSplit(vector<int> &nums)
    {
        map<int, int> count;

        for (int &n : nums)
        {
            count[n]++;
        }

        for (const auto &int_pair : count)
        {
            if (int_pair.second > 2)
            {
                return false;
            }
        }

        return true;
    }
};