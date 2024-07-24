#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, char delimiter)
{
    vector<string> result;
    istringstream stream(input);
    string temp = "";

    while (getline(stream, temp, delimiter))
    {
        result.push_back(temp);
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, answer = 0;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string input;
        getline(cin, input);
        vector<string> result = split(input, ' ');
        int current = count(result.begin(), result.end(), "1");

        if (current >= 2) answer++;
    }

    cout << answer << "\n";
}
