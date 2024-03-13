class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int max_candies = 0;

        for (int i = 0; i < candies.size(); ++i)
        {
            if (candies[i] > max_candies)
            {
                max_candies = candies[i];
            }
        }

        vector<bool> res(candies.size(), false);

        for (int i = 0; i < candies.size(); ++i)
        {
            if (candies[i] + extraCandies >= max_candies)
            {
                res[i] = true;
            }
        }

        return res;
    }
};