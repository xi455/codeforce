#include <bits/stdc++.h>
using namespace std;

void before_handle(char current, int &before, int &after)
{
    if (current == '+')
    {
        after += 1;
    }

    if (current == '-')
    {
        after -= 1;
    }
}

void after_handle(char current, int &before, int &after)
{
    if (current == '+')
    {
        before += 1;
    }

    if (current == '-')
    {
        before -= 1;
    }
}

void judge(string value, int index, int &before, int &after)
{
    if (index == 0)
    {
        char current = value[value.size() - 1];
        before_handle(current, before, after);
    }

    if (index == 2)
    {
        char current = value[0];
        after_handle(current, before, after);
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    string value;
    int before = 0, after = 0;
    while (n--)
    {
        if (after > before)
        {
            before = after;
        }

        getline(cin, value);
        judge(value, value.find("X"), before, after);
    }

    cout << before << endl;
}
