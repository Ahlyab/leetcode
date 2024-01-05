class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int count = 0;
        for (int i = 0; i < jewels.size(); ++i)
        {
            count += countOccurence(jewels[i], stones);
        }
        return count;
    }

    int countOccurence(char ch, string &str)
    {
        int count = 0;
        for (char &character : str)
        {
            if (character == ch)
            {
                ++count;
            }
        }
        return count;
    }
};