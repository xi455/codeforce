#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num = 0, temp = 0;
    int car_in, car_out;

    cin >> n;
    while (n--)
    {
        cin >> car_out >> car_in;

        num -= car_out;
        num += car_in;
        if (num > temp)
        {
            temp = num;
        }
    }

    cout << temp << endl;
}
