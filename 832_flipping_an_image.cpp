class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        for (auto &row : image)
        {
            invertRow(row);
            for (int i = 0, j = row.size() - 1; i < row.size() / 2; ++i)
            {
                swap(row[i], row[j]);
                --j;
            }
        }
        return image;
    }

    void invertRow(vector<int> &row)
    {
        for (int &ele : row)
        {
            ele = (ele == 0) ? 1 : 0;
        }
    }
};