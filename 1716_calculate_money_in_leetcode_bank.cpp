class Solution
{
public:
    int totalMoney(int n)
    {
        int current = 1;
        int prev = 1;
        int total = 0;

        for (int i = 1; i <= n; ++i)
        {
            total += current;
            ++current;
            if (i % 7 == 0)
            {
                ++prev;
                current = ++prev;
            }
        }

        return total;
    }
};