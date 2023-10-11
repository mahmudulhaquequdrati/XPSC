#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    int frq[1005] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                frq[j]++;
        }
    }
    int maxV = INT_MIN;
    int ans = 0;
    for (int i = 0; i < 1005; i++)
    {
        if (frq[i] > maxV)
        {
            maxV = max(maxV, frq[i]);
            ans = i;
        }
    }

    // cout << ans << endl;
    // cout << abs(int('b') - int('z')) << endl;

    return 0;
}