#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int ans = 0;

    for (int i = n; i >= 1; i--)
    {
        ans += 1 + (i - 1) * (n - i + 1);
    }

    cout << ans << endl;

    return 0;
}