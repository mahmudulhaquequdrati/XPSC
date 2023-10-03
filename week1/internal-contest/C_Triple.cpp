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

        int frq[n + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            frq[a[i]]++;
        }
        int val = -1;
        for (int i = 0; i <= n; i++)
        {
            if (frq[i] >= 3)
            {
                val = i;
            }
        }

        cout << val << endl;
    }

    return 0;
}