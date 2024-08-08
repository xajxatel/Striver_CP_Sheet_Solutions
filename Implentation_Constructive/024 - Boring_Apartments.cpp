
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int digit = n % 10;

        int len = 0;
        while (n > 0)
        {
            n = n / 10;
            len++;
        }

        cout << (digit - 1) * 10 + len * (len + 1) / 2 << endl;
    }
}