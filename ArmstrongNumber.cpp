#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isArmStrongNumber(int n)
{
    int c = n;
    int count = to_string(n).length();
    int sum = 0;

    while (n > 0)
    {
        sum += pow(n % 10, count);
        n /= 10;
    }

    return sum == c;
}

int main()
{
    int n = 153;

    cout << boolalpha << isArmStrongNumber(n) << endl;
}