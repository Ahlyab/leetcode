class Solution
{
public:
    int compress(vector<char> &chars)
    {

        if (chars.size() == 1)
        {
            return 1;
        }

        vector<char> temp;
        int count;

        for (int i = 0; i < chars.size(); ++i)
        {
            int j = i;

            while (j < chars.size() && chars[j] == chars[i])
            {
                ++count;
                j++;
            }

            temp.push_back(chars[i]);
            if (count > 1)
            {
                string res = to_string(count);
                for (char &c : res)
                {
                    temp.push_back(c);
                }
            }

            i = --j;
            count = 0;
        }

        chars = temp;
        return temp.size();
    }
};