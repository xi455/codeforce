#include <bits/stdc++.h>

using namespace std;

long long k, n, w, num = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> n >> w;
    for (int index = 1; index <= w; index++)
    {
        num += k * index;
    }

    if (num - n < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << num - n << endl;
    }
}
