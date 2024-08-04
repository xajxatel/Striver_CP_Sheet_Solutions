#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nums;
    cin >> nums;
    int x = 0;
    string stat;

    for (int i = 0; i < nums; i++)
    {
        cin >> stat;
        for (int j = 0; j < 3; j++)
        {

            if (stat[j] == '+')
            {
                x++;
                break;
            }
            else if (stat[j] == '-')
            {
                x--;
                break;
            }
        }
    }

    cout << x << endl;
}