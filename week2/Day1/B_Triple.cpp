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

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int frq[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            frq[a[i]]++;
        }
        int item = -1;

        for (int i = 1; i <= n; i++)
        {
            if (frq[i] >= 3)
            {
                item = i;
            }
        }

        cout << item << endl;
    }

    return 0;
}