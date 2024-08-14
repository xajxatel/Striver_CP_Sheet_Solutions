#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    bool isLower = islower(s[0]);

    bool areRestUpper = true;
    for (int i = 1; i < n; i++)
    {
        if (!isupper(s[i]))
        {
            areRestUpper = false;
            break;
        }
    }

    if (isLower && areRestUpper)
    {

        s[0] = toupper(s[0]);

        for (int i = 1; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    if (!isLower && areRestUpper)
    {
        s[0] = tolower(s[0]);
        for (int i = 1; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}