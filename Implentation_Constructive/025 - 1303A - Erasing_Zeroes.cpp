#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string str;
        cin >> str;

        int i = 0;
        int j = 0;
        int zeroes = 0;
        while (i < str.size())
        {
            if (str[i] == '1')
            {
                j = i + 1;
                while (str[j] != '1' && j < str.size())
                {
                    j++;
                }
                if (j < str.size())
                    zeroes += (j - i - 1);
            }

            i++;
        }

        cout << zeroes << endl;
    }
}