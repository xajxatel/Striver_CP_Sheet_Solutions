#include <vector>
#include <iostream>
#define ll long long
using namespace std;

ll distance(int x1, int y1, int x2, int y2)
{

    return (ll)(x1 - x2) * (x1 - x2) + (ll)(y1 - y2) * (y1 - y2);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<ll, ll>> circles(n);

        for (int i = 0; i < n; i++)
        {
            cin >> circles[i].first >> circles[i].second;
        }

        int xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;

        bool ok = 1;
        for (int i = 0; i < n; i++)
        {

            ll disToCircleFromTarget = distance(circles[i].first, circles[i].second, xt, yt);

            ll disToEnd = distance(xs, ys, xt, yt);

            if (disToCircleFromTarget <= disToEnd)
            {
                ok = 0;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}