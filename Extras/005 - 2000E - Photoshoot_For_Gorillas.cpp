#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       ll n, m, k ,nn;
        cin >> n >> m >> k>>nn;

        vi arr(nn);
        for (int i = 0; i < nn; i++)
        {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        vi grids;

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                int minRow = max(1LL, i - k + 1);
                int maxRow = min(i, n - k + 1);

                int minCol = max(1LL, j - k + 1);
                int maxCol = min(j, m - k + 1);

                grids.push_back((maxRow - minRow + 1) * (maxCol - minCol + 1));
                
            }
        }

        sort(grids.rbegin(), grids.rend());

        ll ans = 0;
        for (ll i = 0; i < nn; i++)
        {
            ans += (grids[i] * arr[i]) ;
        }

        cout << ans << endl;
    }

    return 0;
}