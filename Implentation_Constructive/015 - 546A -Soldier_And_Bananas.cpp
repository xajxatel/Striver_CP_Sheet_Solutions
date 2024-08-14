#include <iostream>

using namespace std;

int main()
{
    int k, money, bananas;
    cin >> k;
    cin >> money;
    cin >> bananas;
    int needed = 0;
    needed = k * bananas * (bananas + 1) / 2;

    if (needed >= money)
        cout << needed - money;
    else
        cout << 0;
}