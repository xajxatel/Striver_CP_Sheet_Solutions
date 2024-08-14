#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int odd = 0;
        int even = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
                odd++;
            else
                even++;
        }

        if (odd % 2 == 0 && odd == n)
            cout << "NO" << endl;
        else if (even == n)
            cout << "NO" << endl;
        else if (odd < n)
            cout << "YES" << endl;
        else if (odd % 2)
            cout << "YES" << endl;
    }
}