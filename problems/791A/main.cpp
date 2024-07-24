#include <bits/stdc++.h>

using namespace std;

int a, b, year;
int main()
{
    while (cin >> a >> b)
    {
        year = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            year += 1;
        }

        cout << year << endl;
    }
}
