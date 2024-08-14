#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    if (n == m)
    {
        cout << 0 << endl;
        return 0;
    }

    queue<pair<int, int>> q;

    q.push({n, 0});

    while (!q.empty())
    {
        int ele = q.front().first;
        int steps = q.front().second;
        q.pop();

        int two = ele * 2;
        int three = ele * 3;

        if (two == m)
        {
            cout << steps + 1 << endl;
            return 0;
        }

        if (three == m)
        {
            cout << steps + 1 << endl;
            return 0;
        }

        if (two < m)
        {
            q.push({two, steps + 1});
        }

        if (three < m)
        {
            q.push({three, steps + 1});
        }
    }

    cout << -1 << endl;
}