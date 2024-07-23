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

int process(vector<int> vt_temp, int k)
{
    if (vt_temp[0] == 0)
    {
        return 0;
    }

    int result = 0;
    for (int index = 0; index < k; index++)
    {
        if (vt_temp[index] > k)
        {
            result += 1;
        }
    }

    k -= 1;
    while ((k + 1) < (vt_temp.size() - 1) && vt_temp[k] == vt_temp[k + 1])
    {
        k += 1;
        result += 1;
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int n, k;
    cin >> n >> k;
    cin.ignore();

    string temp;
    getline(cin, temp);
    vector<int> vt_temp = split_to_vector(temp, ' ');

    int result = process(vt_temp, k);

    cout << result << '\n';
}
