#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    return p1.second < p2.second;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back({i, a});
        }

        sort(v.begin(), v.end(), cmp);

        vector<int> ori(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ori[i];
        }
        sort(ori.begin(), ori.end());
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[v[i].first] = ori[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}