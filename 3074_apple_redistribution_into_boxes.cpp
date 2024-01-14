class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        sort(capacity.rbegin(), capacity.rend());

        int sum = 0;

        for (int n : apple)
        {
            sum += n;
        }

        for (int i = 0; i < capacity.size(); ++i)
        {
            sum -= capacity[i];

            if (sum <= 0)
            {
                return i + 1;
            }
        }
        return -1;
    }
};