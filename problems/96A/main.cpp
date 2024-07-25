#include <bits/stdc++.h>

using namespace std;

void judge(char current, int &zero, int &one)
{
    if (current == '0')
    {
        zero += 1;
    }
    else
    {
        one += 1;
    }
}

string temp;
int zero = 0, one = 0;
bool b = 1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (cin >> temp)
    {
        judge(temp[0], zero, one);
        for (int i = 1; i < temp.size(); i++)
        {
            if (temp[i] != temp[i - 1])
            {
                zero = 0;
                one = 0;
            }
            judge(temp[i], zero, one);

            if (zero == 7 || one == 7)
            {
                b = 0;
                break;
            }
        }

        if (b)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
