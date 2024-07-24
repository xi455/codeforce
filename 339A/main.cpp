#include <bits/stdc++.h>

using namespace std;

int main()
{
    string temp;
    vector<int> vt_temp;

    getline(cin, temp);
    for (int index = 0; index < temp.size(); index++)
    {
        if (temp[index] != '+')
        {
            vt_temp.push_back(temp[index] - '0'); // 將字符轉換為整數
        }
    }

    sort(vt_temp.begin(), vt_temp.end());

    string answer;
    for (int index = 0; index < vt_temp.size(); index++)
    {
        answer += to_string(vt_temp[index]) + "+";
    }

    cout << answer.substr(0, answer.size() - 1) << endl;
}
