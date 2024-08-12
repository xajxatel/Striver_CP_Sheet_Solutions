#include <iostream>  // For cin, cout
#include <string>    // For string
#include <algorithm> // For max function

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
        int farthest = -1;

        for (int i = 0; i < s.size(); i++)
        {
            int roomNo = i + 1;

            if (s[i] == '1')
            {
                farthest = max(farthest, n - roomNo);
                farthest = max(farthest, roomNo - 1);
            }
        }

        if (farthest == -1)
        {
            cout << n << endl;
            continue;
        }

        cout << 2 * farthest + 2 << endl;
    }
    return 0;
}