#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<char> st_temp;
    int temp;

    while (cin >> temp)
    {
        while (st_temp.size() != 4)
        {
            st_temp.clear();
            temp++;
            for (char c : to_string(temp))
            {
                st_temp.insert(c);
            }
        }
        cout << temp << endl;
    }
}
