#include <bits/stdc++.h>
using namespace std;

int process(int temp, int a)
{
    int current = a, result = 1;
    while (temp > current)
    {
        current += a;
        result += 1;
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    long long n, m, a;
    cin >> n >> m >> a;

    long long result1 = process(n, a);
    long long result2 = process(m, a);

    cout << result1 * result2 << '\n';

    return 0;
}
