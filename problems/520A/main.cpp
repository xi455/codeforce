#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int temp_len;
    string temp;

    cin >> temp_len;
    cin >> temp;
    array<bool, 26> temp_bool = {false};

    for (int index = 0; index < temp_len; index++)
    {
        temp_bool[toupper(static_cast<char>(temp[index])) - 65] = true;
    }

    if (find(temp_bool.begin(), temp_bool.end(), 0) == temp_bool.end())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
