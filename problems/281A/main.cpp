#include <bits/stdc++.h>

using namespace std;

int main()
{
    string temp, answer;

    getline(cin, temp);
    answer += char(toupper(temp[0]));
    answer += temp.substr(1, temp.size());

    cout << answer << endl;
}
