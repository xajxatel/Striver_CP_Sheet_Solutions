#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        if (r >= 2 * l)
        {
            cout << l << " " << 2 * l << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}