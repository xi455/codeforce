#include <bits/stdc++.h>
using namespace std;

string temp, answer;
array<char, 6> judge = {'a', 'o', 'y', 'e', 'u', 'i'};

int main()
{
    while (getline(cin, temp))
    {
        answer = "";
        for (char c : temp)
        {
            c = tolower(static_cast<unsigned char>(c));

            if (find(judge.begin(), judge.end(), c) == judge.end())
            {
                answer += "." + string(1, c);
            }
        }

        cout << answer << endl;
    }
}
