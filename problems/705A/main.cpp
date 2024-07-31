#include <bits/stdc++.h>
using namespace std;

string process(int n)
{
    string result;
    if (n <= 1)
    {
        result.append("I hate it");
        return result;
    }

    result = "I hate that I love that";
    for (int index = 2; index < n; index++)
    {
        if (index % 2 == 0)
        {
            result.append(" I hate that");
        }
        else
        {
            result.append(" I love that");
        }
    }

    result = result.substr(0, result.size() - 5);
    result += " it";

    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string temp;
    while (cin >> n)
    {
        cout << process(n) << endl;
    }
}
