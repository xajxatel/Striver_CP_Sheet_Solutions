#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool isPermutation(string &s1, string &s2, int n)
{
    vector<int> c1(26, -1);
    vector<int> c2(26, -1);

    for (int i = 0; i < n; i++)
    {
        c1[s1[i] - 'a']++;
        c2[s2[i] - 'a']++;
    }

    return c1 == c2;
}

bool checkForSubstring(string &s, string &h)
{
    int n = s.size();
    int m = h.size();

    for (int i = 0; i <= m - n; i++)
    {
        string subs = h.substr(i, n);
        if (isPermutation(s, subs, n))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;
        string h;
        cin >> h;

        if (checkForSubstring(s, h))
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