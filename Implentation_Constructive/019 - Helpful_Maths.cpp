#include <iostream>

using namespace std;

int main()
{
    string x;
    cin >> x;
    int n = x.size();
    int ops = n / 2;
    sort(x.begin(), x.end());

    string ans = "";
    for (int i = ops; i < n; i++)
    {
        ans += x[i];
        if (i != n - 1)
            ans += '+';
    }

    cout << ans;
}