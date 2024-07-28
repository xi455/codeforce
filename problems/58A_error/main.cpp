#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string temp;
    string hello = "hello";
    bool answer = true;

    while (cin >> temp)
    {
        int num = 0;
        for (char c : temp)
        {
            int current_num = find(temp.begin(), temp.end(), 'o') - temp.begin();

            if (current_num == temp.size())
            {
                answer = false;
                break;
            }

            if (num > current_num)
            {
                answer = false;
                break;
            }

            num = current_num;
        }

        cout << (answer ? "YES" : "NO") << endl;
    }
}
