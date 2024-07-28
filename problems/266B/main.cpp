#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int temp_len, time;
    string temp;

    cin >> temp_len >> time;
    cin >> temp;

    while (time--)
    {
        vector<bool> temp_bool(temp_len, false);
        for (int index = 1; index < temp.size(); index++)
        {
            if (temp[index] == 'G' && temp[index - 1] == 'B' && temp_bool[index - 1] == false)
            {
                swap(temp[index - 1], temp[index]);
                temp_bool[index] = true;
            }
        }
    }

    cout << temp << endl;
}
