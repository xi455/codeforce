#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int num;
    vector<int> vt_temp;
    cin >> n;

    while (n--)
    {
        cin >> num;
        vt_temp.push_back(num);
    }

    double total = accumulate(vt_temp.begin(), vt_temp.end(), 0);
    cout << total / vt_temp.size() << endl;
}
