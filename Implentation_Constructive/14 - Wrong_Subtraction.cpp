#include <iostream>
using namespace std;

int main()
{
    int k, number;
    cin >> number;
    cin >> k;

    while (k--)
    {
        int lastDigit = number % 10;
        if (lastDigit != 0)
            number = number - 1;
        else
            number = number / 10;
    }
    cout << number;
}