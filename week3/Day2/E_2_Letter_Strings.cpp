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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            string s = v[i];
            for (int j = i + 1; j < n; j++)
            {
                string cur = v[j];
                if (s[0] == cur[0] && s[1] != cur[1])
                {
                    cnt++;
                }
                else if (s[0] != cur[0] && s[1] == cur[1])
                {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}