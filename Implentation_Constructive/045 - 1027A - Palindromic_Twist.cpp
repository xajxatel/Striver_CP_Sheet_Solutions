#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int i = 0;
        int j = n - 1;
        bool ok = true;

        while (i < j)
        {

            // Check if s[i] and s[j] are exactly two positions apart in the alphabet
            if (abs(s[i] - s[j]) != 2 && s[i] != s[j])
            {
                ok = false;
                break;
            }

            i++;
            j--;
        }

        if (ok)
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