class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> temp;

        for (int i = 0; i < nums1.size(); ++i)
        {
            if (find(nums2.begin(), nums2.end(), nums1.at(i)) != nums2.end())
            {
                temp.push_back(nums1[i]);
            }
        }

        for (int i = 0; i < temp.size(); ++i)
        {
            nums1.erase(remove(nums1.begin(), nums1.end(), temp.at(i)), nums1.end());
            nums2.erase(remove(nums2.begin(), nums2.end(), temp.at(i)), nums2.end());
        }

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

        return vector<vector<int>>{nums1, nums2};
    }
};