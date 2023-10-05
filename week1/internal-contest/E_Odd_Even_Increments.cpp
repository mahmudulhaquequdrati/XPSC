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
            a[i] %= 2;
        }

        int x = a[0], y = a[1];
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] != x)
            {
                cout << "NO" << endl;
            }
        }
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] != y)
            {
                cout << "NO" << endl;
            }
        }

        cout << "YES" << endl;
    }

    return 0;
}