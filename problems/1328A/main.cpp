#include <bits/stdc++.h>
using namespace std;

int process(int a, int b)
{
    int num;
    if (a <= b)
    {
        num = b - a;
        return num;
    }

    if (a % b != 0)
    {
        num = (a / b + 1) * b;
        num -= a;
        return num;
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a, b;

    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << process(a, b) << endl;
    }
}
