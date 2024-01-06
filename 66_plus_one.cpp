class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        int carry = 0;
        digits[digits.size() - 1] += 1;
        cout << digits[digits.size() - 1] << endl;

        for (int i = digits.size() - 1; i >= 0; --i)
        {
            digits[i] = digits[i] + carry;
            carry = (digits[i]) / 10;
            if (carry == 0)
            {
                break;
            }
            digits[i] = (digits[i]) % 10;
        }

        if (carry > 0)
        {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};