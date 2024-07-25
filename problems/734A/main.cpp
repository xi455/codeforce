#include <bits/stdc++.h>
using namespace std;

int n;
string temp;
int anton = 0, danik = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> temp;

    for (char c : temp)
    {
        if (c == 'D')
        {
            danik++;
        }
        else if (c == 'A')
        {
            anton++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}
