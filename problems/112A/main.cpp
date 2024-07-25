#include <bits/stdc++.h>

using namespace std;

int main()
{
    string temp1, temp2;
    getline(cin, temp1);
    getline(cin, temp2);

    int num1 = 0, num2 = 0, result = 0;
    for (int index = 0; index < temp1.size(); index++)
    {
        num1 = int(toupper(static_cast<unsigned char>(temp1[index])));
        num2 = int(toupper(static_cast<unsigned char>(temp2[index])));

        if (num1 > num2)
        {
            result = 1;
            break;
        }
        else if (num1 < num2)
        {
            result = -1;
            break;
        }
    }

    cout << result << endl;
}
