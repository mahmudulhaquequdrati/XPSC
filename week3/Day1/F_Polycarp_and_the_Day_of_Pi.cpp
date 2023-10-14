#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string PI = "314159265358979323846264338327";
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == PI[i])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}