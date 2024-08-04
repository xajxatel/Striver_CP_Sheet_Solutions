#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int x;
    cin >> x;

    string num = to_string(x);
    int n = num.size();

    for (int i = 0; i < n; i++)
    {

        int digit = num[i] - '0';

        if (i == 0 && digit == 9)
            continue;

        int revDigit = 9 - digit;

        if (revDigit < digit)
        {
            char revChar = revDigit + '0';
            num[i] = revChar;
        }
    }

    long long ans = stoll(num);

    cout << ans << endl;
}