#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        bool flag = 1;
        if (n == 1 || n == 2)
        {
            cout << 1 << endl;
            flag = 0;
        }

        n = n - 2;
        double k = double(n) / m;
        k = ceil(k);

        if (flag)
            cout << k + 1 << endl;
        ;
    }
}