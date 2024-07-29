#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> ve_temp;
        int temp;
        while (n--)
        {
            cin >> temp;
            ve_temp.push_back(temp);
        }

        bool check = true;
        for (int index = 1; index < ve_temp.size(); index++)
        {
            if ((ve_temp[index] - ve_temp[index - 1]) > 1)
            {
                check = false;
                break;
            }
        }

        cout << (check ? "YES" : "NO") << endl;
    }
}
