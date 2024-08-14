#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vi arr(n + 1);
        vi pre(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];

            pre[i] = pre[i - 1] + arr[i];
        }

        string s;
        cin >> s;

        int i = 1;
        int j = n;
        ll ans = 0;

        while (i < j)
        {
            if (s[i - 1] == 'L' && s[j - 1] == 'R')
            {
                ans += (pre[j] - pre[i - 1]);
                i++;
                j--;
            }
            else if (s[i - 1] == 'R')
            {
                i++;
            }
            else if (s[i - 1] == 'L')
            {
                j--;
            }
        }

        cout << ans << endl;
    }
}