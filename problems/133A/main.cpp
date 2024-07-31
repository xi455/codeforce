#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<char> commands = {'H', 'Q', '9'};

    string temp;
    getline(cin, temp);

    bool check = false;
    for (char c : temp)
    {
        if (commands.count(c))
        {
            check = true;
            break;
        }
    }

    cout << (check ? "YES" : "NO") << endl;
}
