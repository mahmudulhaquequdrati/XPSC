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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            string s;
            cin >> s;
            reverse(s.begin(), s.end());
            for (auto &&ch : s)
            {
                if (ch == 'D')
                {
                    ans[i] = (a[i] + 1) % 10;
                    a[i] = (a[i] + 1);
                }
                else
                {
                    ans[i] = (a[i] - 1) % 10;
                    if (ans[i] == -1)
                    {
                        ans[i] = 9;
                    }
                    if ((a[i] - 1) == -1)

                    {
                        a[i] = 9;
                    }
                    else
                    {
                        a[i] = (a[i] - 1);
                    }
                }
            }
        }

        for (auto &&i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}