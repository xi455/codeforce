#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> ve_temp(n, 0);

    int index = 1;
    int temp;
    while (n--)
    {
        cin >> temp;
        ve_temp[temp - 1] = index;
        index++;
    }

    for (int num : ve_temp)
    {
        cout << num << " ";
    }
}
