class Solution
{
public:
    string trim_complete(string &str)
    {
        const char *whitespace_type = " ";
        str.erase(str.find_last_not_of(whitespace_type) + 1);
        str.erase(0, str.find_first_not_of(whitespace_type));
        return str;
    }

    string removeExtraSpaces(string &str)
    {
        // remove one of two consecutive whitespaces
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == ' ' && str[i + 1] == ' ')
            {
                str.erase(i, 1);
                --i;
            }
        }
        return str;
    }

    string trim(string &str)
    {
        str = removeExtraSpaces(str);
        return trim_complete(str);
    }

    string reverseWords(string s)
    {
        s = trim_complete(s);

        if (count(s.begin(), s.end(), ' ') == 0)
        {
            return s;
        }
        string res = "";
        int i = s.size() - 1, j = s.size() - 1;
        while (i >= 0 && j >= 0)
        {
            if (s[j] != ' ')
            {
                --j;
            }
            else
            {
                int temp = j;
                while (temp <= i)
                {
                    res += s[temp];
                    ++temp;
                }
                i = --j;
                --j;
            }
        }
        ++j;
        res += (res[res.size() - 1] == ' ') ? "" : " ";
        if (j == 0)
        {
            while (j <= i)
            {
                res += s[j];
                ++j;
            }
        }
        return trim(res);
    }
};