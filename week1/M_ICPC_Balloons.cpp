#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int frq[26] = {0};
        string s;
        cin >> s;
        for (auto i : s)
        {
            frq[i - 'A']++;
        }

        int ans = 0;

        for (char i = 'A'; i <= 'Z'; i++)
        {
            if (frq[i - 'A'] > 0)
            {
                if (frq[i - 'A'] == 1)
                {
                    ans += 2;
                }
                else
                {
                    ans += frq[i - 'A'] + 1;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}