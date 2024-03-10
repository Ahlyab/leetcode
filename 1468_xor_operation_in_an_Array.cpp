class Solution
{
public:
    int xorOperation(int n, int start)
    {

        int first = start + 2 * 0;

        for (int i = 1; i < n; ++i)
        {
            first = first ^ (start + 2 * i);
        }
        return first;
    }
};