#include <bits/stdc++.h>
using namespace std;

void add_set(set<int> &st_temp, int num)
{
    while (num--)
    {
        int current;
        cin >> current;
        st_temp.insert(current);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int p, q;
    set<int> st_temp;

    cin >> n;

    cin >> p;
    add_set(st_temp, p);

    cin >> q;
    add_set(st_temp, q);

    bool check = true;
    for (int index = 1; index <= n; index++)
    {
        if (!st_temp.count(index))
        {
            check = false;
            break;
        }
    }

    cout << (check ? "I become the guy." : "Oh, my keyboard!") << endl;
}
