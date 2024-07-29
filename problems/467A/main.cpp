#include <bits/stdc++.h>

int process(int &p, int &q)
{
    if (p == q)
    {
        return 0;
    }

    return 1;
}

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, q, num = 0;
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if (q - p >= 2)
        {
            num++;
        }
    }
    cout << num << endl;
}
