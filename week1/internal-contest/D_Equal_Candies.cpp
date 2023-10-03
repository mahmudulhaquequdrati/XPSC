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

        sort(a, a + n);
        int sum = 0;
        int min = a[0];
        for (int i = 1; i < n; i++)
        {
            int remaining = abs(min - a[i]);
            sum += remaining;
        }
        cout << sum << endl;
    }

    return 0;
}