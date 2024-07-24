#include <bits/stdc++.h>

using namespace std;

int n;
string temp;
array<int, 3> arr_temp;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n;
    cin.ignore();
    while (n--)
    {
        getline(cin, temp);
        stringstream ss(temp);
        int index = 0;
        string number;

        while (ss >> number && index < 3)
        {
            arr_temp[index] = stoi(number);
            index++;
        }

        for(int index = 0; index < temp.size(); index++) {
            if (isdigit(temp[index])) {
                arr_temp[index] = stoi(string(2, temp[index]));
            }
        }

        sort(arr_temp.begin(), arr_temp.end());
        if (arr_temp[2] - arr_temp[1] == arr_temp[0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
