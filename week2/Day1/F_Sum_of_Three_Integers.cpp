#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k, s;
    cin >> k >> s;
    int cnt[s] = {0};

    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            cnt[x + y]++;
        }
    }

    int ans = 0;

    for (int i = 0; i <= k; i++)
    {
        ans += cnt[s - i];
    }

    cout << ans << endl;

    return 0;
}