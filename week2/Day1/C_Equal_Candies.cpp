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

        int a[n + 1];
        int minV = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minV = min(minV, a[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += a[i] - minV;
        }

        cout << cnt << endl;
    }

    return 0;
}