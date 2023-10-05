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

        int a[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int maxDiff = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            int diff = a[i] - i;
            maxDiff = max(maxDiff, diff);
        }

        cout << maxDiff << endl;
        }

    return 0;
}