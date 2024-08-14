#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    cin >> y;

    int ans = 0;

    while (x <= y)
    {
        x = x * 3;
        y = y * 2;
        ans++;
    }
    cout << ans;
}
