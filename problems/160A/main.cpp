#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;
    vector<int> ve_temp;

    cin >> n;
    while (n--)
    {
        cin >> temp;
        ve_temp.push_back(temp);
    }

    sort(ve_temp.rbegin(), ve_temp.rend());

    int index = 0;
    int current = 0;
    int total = accumulate(ve_temp.begin(), ve_temp.end(), 0);
    for (int i : ve_temp)
    {
        current += i;
        total -= i;
        index++;

        if (total < current)
            break;
        ;
    }

    cout << index << endl;
}
