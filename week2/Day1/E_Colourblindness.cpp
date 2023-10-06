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
        string s, s1;
        cin >> s >> s1;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s1[i])
            {
                if ((s[i] == 'G' && s1[i] == 'B') || (s[i] == 'B' && s1[i] == 'G'))
                {
                    ok = true;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}