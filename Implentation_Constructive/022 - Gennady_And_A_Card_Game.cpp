#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tableCard;
    cin >> tableCard;

    for (int i = 0; i < 5; i++)
    {
        string myCard;
        cin >> myCard;

        if (myCard[0] == tableCard[0] || myCard[1] == tableCard[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}