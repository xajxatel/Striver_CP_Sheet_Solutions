#include <iostream>
#include<algorithm>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t, a, b, c, n;
    cin >> t;
    while (t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2] >> n;

        sort(arr, arr + 3);

        int b = arr[2] - arr[0];
        int c = arr[2] - arr[1];

        n = n - (b + c);

        if (n % 3 == 0 && n >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
