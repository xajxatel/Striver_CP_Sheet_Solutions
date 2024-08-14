#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int x;
    for (int i = 0; i < t; i++)
    {

        cin >> x;
        if (x)
        {
            cout << "HARD" << endl;
            break;
        }
    }
    if (x == 0)
        cout << "EASY" << endl;
}