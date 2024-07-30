#include <bits/stdc++.h>
using namespace std;

void getLuckNumber(vector<int> &luckNumbers, int num = 0)
{
    if (num > 1000) return;
    if (num > 0) luckNumbers.push_back(num);

    getLuckNumber(luckNumbers, num * 10 + 4);
    getLuckNumber(luckNumbers, num * 10 + 7);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> luckyNumbers;
    getLuckNumber(luckyNumbers);

    int n;
    while (cin >> n)
    {
        bool check = false;
        for(int i: luckyNumbers) {
            if (n % i == 0) {
                check = true;
                break;
            }
        }

        cout << (check ? "YES" : "NO") << endl;
    }

}
