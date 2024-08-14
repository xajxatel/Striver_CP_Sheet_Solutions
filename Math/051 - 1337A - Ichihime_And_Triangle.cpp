#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Choosing the boundary values:
        int x = b; // The largest value in the range [a, b]
        int y = c; // The smallest value in the range [b, c]
        int z = c; // The smallest value in the range [c, d]

        // Since x = b, y = c, and z = c, the triangle inequality is satisfied:
        // 1. x + y = b + c > z = c
        // 2. y + z = c + c > x = b
        // 3. z + x = c + b > y = c

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}