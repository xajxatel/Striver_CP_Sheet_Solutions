#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n, steps;
        steps = 0;
        cin >> a >> b >> n;

        while (a <= n && b <= n)
        {
            if (a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            steps++;
        }
        cout << steps << endl;
    }
}