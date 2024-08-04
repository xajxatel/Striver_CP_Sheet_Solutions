#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    string name;
    cin >> name;

    unordered_set<char> st;

    for (int i = 0; i < name.size(); i++)
    {
        st.insert(name[i]);
    }
    int ans = st.size();
    if (ans % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}