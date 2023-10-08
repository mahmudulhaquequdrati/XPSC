#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long pre[n + 5] = {0};
    pre[1] = a[0];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }

    vector<int> a2 = a;
    sort(a2.begin(), a2.end());

    long long pre2[n + 5] = {0};
    pre2[1] = a2[0];

    for (int i = 2; i <= n; i++)
    {
        pre2[i] = pre2[i - 1] + a2[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;
        int u, v;
        cin >> u >> v;
        if (type == 1)
        {
            cout << (pre[v] - pre[u - 1]) << endl;
        }
        else
        {
            cout << (pre2[v] - pre2[u - 1]) << endl;
        }
    }

    return 0;
}