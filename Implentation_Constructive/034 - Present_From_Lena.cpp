#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int spaces = n * 2;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (i != 0)
                cout << " ";
        }

        for (int k = i - 1; k >= 0; k--)
        {
            cout << k;
            if (k > 0)
                cout << " ";
        }

        spaces = spaces - 2;
        cout << endl;
    }

    spaces = 2;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (i != 0)
                cout << " ";
        }

        for (int k = i - 1; k >= 0; k--)
        {
            cout << k;
            if (k > 0)
                cout << " ";
        }

        spaces = spaces + 2;
        cout << endl;
    }
}