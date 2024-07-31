#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    set<int> st_temp;
    while (cin >> n)
    {
        st_temp.insert(n);
    }

    cout << 4 - st_temp.size() << endl;
}
