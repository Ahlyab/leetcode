class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1;
        int max_area = 0;

        while (i < j)
        {
            int min_height = (height[i] < height[j]) ? height[i] : height[j];
            int res = min_height * (j - i);
            max_area = (max_area < res) ? res : max_area;
            if (height[i] < height[j])
            {
                ++i;
            }
            else
            {
                --j;
            }
        }

        return max_area;
    }
};