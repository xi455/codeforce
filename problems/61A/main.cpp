#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string temp1, temp2;
    cin >> temp1;
    cin >> temp2;

    for (int index = 0; index < temp1.size(); index++)
    {
        cout << static_cast<int>(temp1[index] ^ temp2[index]);
    }

    cout << endl;
}
