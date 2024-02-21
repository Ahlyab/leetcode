#include <iostream>
using namespace std;

int cutRodDP(int p[], int n)
{
    int *r = new int[n + 1]{0};
    int *s = new int[n + 1]{0};
    r[0] = 0;

    for (int i = 0; i < n; ++i)
    {
        int q = INT_MIN;
        for (int j = 0; j <= i; ++j)
        {
            if (q < p[j] + r[i - j])
            {
                q = p[j] + r[i - j];
                s[i] = j;
            }
        }
        r[i + 1] = q;
    }
    return r[n];
}

int main()
{
    int price[5] = {
        1,
        5,
        8,
        9,
        10};
    cout << cutRodDP(price, 5);
    return EXIT_SUCCESS;
}