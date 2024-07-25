#include <bits/stdc++.h>
using namespace std;

string temp;
int num;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (cin >> temp >> num)
    {
        while (num--)
        {
            if (temp[temp.size() - 1] != '0')
            {
                temp = to_string(stoi(temp) - 1);
            }
            else
            {
                temp = to_string(stoi(temp) / 10);
            }
        }
        cout << temp << endl;
    }
}
