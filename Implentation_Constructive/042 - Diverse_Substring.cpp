#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    string ans = "";
    ans += s[0];
    for (auto ch : s)
    {
        if (ch != s[0])
        {
            ans += ch;
            break;
        }
    }

    if (ans.size() == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl
             << ans << endl;
    }

    return 0;
}