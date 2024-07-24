#include <bits/stdc++.h>

using namespace std;

int main()
{
    string temp;
    set<char> st_temp;

    while (getline(cin, temp))
    {
        for (int index = 0; index < temp.size(); index++)
        {
            st_temp.insert(temp[index]);
        }

        int temp_len = st_temp.size();
        if (temp_len % 2 == 0)
        {
            cout << "CHAT WITH HER!" << endl;
        }
        else
        {
            cout << "IGNORE HIM!" << endl;
        }
    }
}
