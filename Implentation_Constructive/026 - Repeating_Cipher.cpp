#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    if (n == 1)
    {
        cout << str << endl;
        return 0;
    }

    string ans;

    int i = 1;

    while (i < n)
    {
        int index = i * (i + 1) / 2 - 1;

        if (index > n)
            break;
        ans += str[index];

        i++;
    }

    cout << ans << endl;
}