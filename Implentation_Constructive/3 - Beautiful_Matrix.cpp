#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 0;
    int col = 0;
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(2 - row) + abs(2 - col) << endl;
}