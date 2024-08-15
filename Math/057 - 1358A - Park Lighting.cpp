#include <iostream>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t, n, m;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        ll ans = 0;
        ans = ceil(((float)(n) * (float)(m)) / 2);
        cout << ans << endl;
    }

    return 0;
}
