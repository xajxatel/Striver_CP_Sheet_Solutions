#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    int nos = 0;
    while (t)
    {
        int digit = t % 10;
        if (digit == 7 || digit == 4)
            nos++;
        t = t / 10;
    }

    if (nos == 7 || nos == 4)
        cout << "YES";
    else
        cout << "NO";
}