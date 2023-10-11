#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v[i] = s;
        }
        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int cur = 0;
            int sz = v[i].size();
            for (int j = i + 1; j < n; j++)
            {
                cur = 0;
                for (int k = 0; k < sz; k++)
                {
                    cur += abs(int(v[i][k]) - int(v[j][k]));
                }
                ans = min(ans, cur);
            }
        }
        cout << ans << endl;
    }
    return 0;
}