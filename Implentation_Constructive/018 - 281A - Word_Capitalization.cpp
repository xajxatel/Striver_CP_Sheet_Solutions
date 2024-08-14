#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;

    name[0] = toupper(name[0]);

    cout << name;
}