#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    if (m > n)
    {
        cout << -1 << endl;

        return 0;
    }

    int minSteps = n % 2 == 0 ? n / 2 : n / 2 + 1;

    int rem = minSteps % m;
    if (rem != 0)
    {
        minSteps -= rem;
        minSteps += m;
    }
    cout << minSteps << endl;
}