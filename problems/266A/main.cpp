#include <bits/stdc++.h>

using namespace std;

int n, num = 0;
string temp;
int main()
{
    cin >> n;
    cin.ignore();
    getline(cin, temp);

    for (int index = 1; index < n; index++)
    {
        if (temp[index] == temp[index - 1])
        {
            num += 1;
        }
    }

    cout << num << endl;
}
