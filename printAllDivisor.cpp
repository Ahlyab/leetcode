#include <iostream>
#include <cmath>
using namespace std;

void printAllDivisor(int n)
{
    cout << 1 << endl
         << n << endl;

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    printAllDivisor(36);
}