#include <bits/stdc++.h>
using namespace std;

vector<int> split_to_vector(string temp, char delimiter)
{
    vector<int> result;
    istringstream stream(temp);
    string current;

    while (getline(stream, current, delimiter))
    {
        result.push_back(stoi(current));
    }

    return result;
}

void vector_print(vector<int> temp)
{
    for (int current : temp)
    {
        cout << current << " ";
    }

    cout << endl;
}

int process(vector<int> vt_temp, int n, int k)
{
    int result = 0;
    for (int index = 0; index < n; ++index)
    {
        if (vt_temp[index] > 0 && vt_temp[index] >= vt_temp[k])
        {
            result += 1;
        }
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int n, k;
    cin >> n >> k;
    k--;
    cin.ignore();

    string temp;
    getline(cin, temp);
    vector<int> vt_temp = split_to_vector(temp, ' ');

    int result = process(vt_temp, n, k);

    cout << result << '\n';
}
