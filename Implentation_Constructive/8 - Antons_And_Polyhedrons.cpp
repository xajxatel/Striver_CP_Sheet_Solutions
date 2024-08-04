#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        string temp;
        cin >> temp;

        if (temp[0] == 'T')
            ans += 4;
        if (temp[0] == 'C')
            ans += 6;
        if (temp[0] == 'D')
            ans += 12;
        if (temp[0] == 'I')
            ans += 20;
        if (temp[0] == 'O')
            ans += 8;
    }

    cout << ans;
}