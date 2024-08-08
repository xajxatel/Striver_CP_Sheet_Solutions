#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cin >> x;

    int n = x.size();

    for (int i = 0; i < n; i++)
    {

        if (x[i] == 'a' ||
            x[i] == 'e' ||
            x[i] == 'i' ||
            x[i] == 'o' ||
            x[i] == 'u' ||
            x[i] == 'A' ||
            x[i] == 'E' ||
            x[i] == 'I' ||
            x[i] == 'O' ||
            x[i] == 'U' ||
            x[i] == 'Y' ||
            x[i] == 'y')
        {
            x.erase(i, 1);
            n--;
            i--;
        }
        else
        {
            x[i] = tolower(x[i]);
            x.insert(i, ".");
            i++;
            n++;
        }
    }

    cout << x << endl;
}