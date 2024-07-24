#include <bits/stdc++.h>

using namespace std;

int main()
{
    int temp;
    cin >> temp;

    int n = 6, num = 0;
    while (--n)
    {
        while (temp && temp >= n)
        {
            temp -= n;
            num += 1;
        }
    }

    cout << num << endl;
}
