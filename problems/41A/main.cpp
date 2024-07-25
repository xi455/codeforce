#include <bits/stdc++.h>

using namespace std;

string temp1, temp2;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> temp1 >> temp2;
    reverse(temp1.begin(), temp1.end());

    if (temp1 == temp2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
