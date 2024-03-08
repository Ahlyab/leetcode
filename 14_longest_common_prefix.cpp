class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string result = "";
        int minLength = strs[0].size();

        for (string &str : strs)
        {
            minLength = (minLength < str.size()) ? minLength : str.size();
        }

        for (int i = 0; i < minLength; ++i)
        {
            char current = strs[0][i];
            for (string &s : strs)
            {
                if (s[i] != current)
                {
                    return result;
                }
            }
            result += current;
        }
        return result;
    }
};