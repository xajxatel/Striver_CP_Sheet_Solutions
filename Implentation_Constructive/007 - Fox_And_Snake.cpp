#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>

using namespace std;

int main()
{
    int row, col;
    cin >> row;
    cin >> col;

    bool right = true;
    bool dotFront = true;
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (dotFront)
            {
                for (int j = 0; j < col; j++)
                {
                    if (j == col - 1)
                    {
                        cout << "#";
                        continue;
                    }
                    cout << ".";
                }
                cout << endl;
                dotFront = !dotFront;
            }
            else
            {
                for (int j = 0; j < col; j++)
                {
                    if (j == 0)
                    {
                        cout << "#";
                        continue;
                    }
                    cout << ".";
                }
                cout << endl;
                dotFront = !dotFront;
            }
        }
    }
}