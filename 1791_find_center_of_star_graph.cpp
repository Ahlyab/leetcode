class Solution
{
public:
    int findCenter(vector<vector<int>> &edges)
    {
        int n = edges.size();
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[edges[i][0]]++;
            freq[edges[i][1]]++;
        }

        for (auto num : freq)
        {
            if (num.second == n)
            {
                return num.first;
            }
        }
        return -1;
    }
};