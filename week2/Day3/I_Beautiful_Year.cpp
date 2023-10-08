#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> frq(11, 0);
    for (int i = n + 1; i <= 11000; i++)
    {
        fill(frq.begin(), frq.end(), 0);

        bool ok = true;
        string s = to_string(i);
        for (auto &&j : s)
        {
            frq[j - '0']++;
        }

        for (int i = 0; i <= 10; i++)
        {
            if (frq[i] > 1)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << s << endl;
            break;
        }
    }

    return 0;
}