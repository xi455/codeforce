#include <bits/stdc++.h>
using namespace std;

void toUpper(string &temp)
{

    string result;
    for (char c : temp)
    {
        c = toupper(static_cast<char>(c));
        result.append(string(1, c));
    }

    temp = result;
}

void toLower(string &temp)
{

    string result;
    for (char c : temp)
    {
        c = tolower(static_cast<char>(c));
        result.append(string(1, c));
    }

    temp = result;
}

string temp;
int upper_num;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> temp)
    {
        upper_num = 0;
        for (char c : temp)
        {
            if (isupper(c))
            {
                upper_num++;
            }
        }

        int half = temp.size() / 2;
        if (upper_num > half)
        {
            toUpper(temp);
        }
        else
        {
            toLower(temp);
        }

        cout << temp << endl;
    }
}
