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
        vector<vector<int>> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int val;
                cin >> val;

                v[i].push_back(val);
                if (j == n - 2)
                {
                    // cout << v[i][j] << endl;
                    mp[v[i][j]]++;
                }
            }
        }
        int last = 0;
        for (auto &&i : mp)
        {

            if (i.second == n - 1)
            {
                last = i.first;
            }
        }
        vector<int> ans;

        for (int i = 0; i < v.size(); i++)
        {
            auto it = find(v[i].begin(), v[i].end(), last);
            if (it != v[i].end())
            {
                continue;
            }
            else
            {
                v[i].push_back(last);
                ans = v[i];
            }
        }

        for (auto &&i : ans)
        {
            cout << i << " ";
        }
        cout << endl;

        //     for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n - 1; j++)
        //     {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }

    return 0;
}