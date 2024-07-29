#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string temp;
    array<char, 2> arr_temp{'4', '7'};
    bool check = true;
    while (cin >> temp)
    {
        for (char c : arr_temp)
        {
            if (find(temp.begin(), temp.end(), c) == temp.end())
            {
                check = false;
                break;
            }
        }

        if (!check)
        {
            int num = stoi(temp);
            if (num % 4 == 0)
            {
                check = true;
            }
            else if (num % 7 == 0)
            {
                check = true;
            }
        }

        cout << (check ? "YES" : "NO") << endl;
    }
}
