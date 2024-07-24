#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        string value;
        cin >> value;
        if (value.size() > 10)
        {
            cout << value[0] << value.size() - 2 << value[value.size() - 1] << endl;
        }
        else
        {
            cout << value << endl;
        }
    }
}
