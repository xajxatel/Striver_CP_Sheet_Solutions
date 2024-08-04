#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int height = 0;
    int used = 0;
    int level = 1;

    while (true)
    {
        int cubes_needed = level * (level + 1) / 2; // Sum of first 'level' numbers
        if (used + cubes_needed > n)
        {
            break;
        }
        used += cubes_needed;
        height++;
        level++;
    }

    cout << height << endl;
    return 0;
}