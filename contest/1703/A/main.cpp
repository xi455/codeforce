#include <bits/stdc++.h>

using namespace std;

int n;
string temp, current;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> n;
    while (n--)
    {
        cin >> temp;
        current = "";
        for (char c : temp)
        {
            c = tolower(static_cast<unsigned char>(c));
            current.append(string(1, c));
        }

        if (current == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
