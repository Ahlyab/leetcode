class Solution
{
    bool isTitle(string word)
    {
        bool isLower = true;

        for (int i = 1; i < word.size(); ++i)
        {
            if (isupper(word.at(i)))
            {
                isLower = false;
                break;
            }
        }

        return isupper(word[0]) && isLower;
    }

    bool isUpperWord(string word)
    {

        for (char ch : word)
        {
            if (!isupper(ch))
                return false;
        }
        return true;
    }

    bool isLowerWord(string word)
    {
        for (char ch : word)
        {
            if (!islower(ch))
                return false;
        }
        return true;
    }

public:
    bool detectCapitalUse(string word)
    {
        if (isTitle(word) || isUpperWord(word) || isLowerWord(word))
            return true;
        else
            return false;
    }
};