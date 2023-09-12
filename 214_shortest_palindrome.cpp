#include <string>
#include <iostream>
using namespace std;

void validateString(const string& source, string& newlyCreated) {
    if (newlyCreated.find(source) != string::npos) {
        return;
    }

    for (int i = source.size() - 1, j = newlyCreated.size() - 1; i >= 0; --i) {
        if (source[i] != newlyCreated[j]) {
            cout << source[i] << "!=" << newlyCreated[j] << endl;
            string temp(1, source[i]);
            newlyCreated.insert(j+1, temp);
        }
        else {
            --j;

        }
    }
}


bool isPalindrome(const string &s)
{
    int size = s.size();
    for (int i = 0; i < size / 2; ++i)
    {
        if (s[i] != s[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}


string shortestPalindrome(string s)
{
    if (isPalindrome(s))
    {
        return s;
    }
    int size = s.size();
    string res = s;
    int end = size - 1;

    for (int i = 0, j = 0; i < size && end >= 0; --end)
    {
        if (s[i] != s[end])
        {
            string temp(1, s[end]);
            res.insert(j, temp);
            ++j;

            if (isPalindrome(res)) {
                validateString(s, res);
                return res;
            }
        }
        else{
            ++i; ++j;
        }
    }
    return res;
}





int main() {
    cout << shortestPalindrome("adcba");

    // string s1 = "hello";
    // string s2 = "ehllo";

    // validateString(s1, s2);

    // cout << s2 << endl;


}