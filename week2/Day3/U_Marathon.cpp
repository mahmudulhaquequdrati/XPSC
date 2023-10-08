#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int cnt = 0;
        if (b > a)
        {
            cnt++;
        }
        if (c > a)
        {
            cnt++;
        }
        if (d > a)
        {
            cnt++;
        }
        cout << cnt << endl;

        // int a[3];
        // for (int i = 0; i < 4; i++)
        // {
        //     cin >> a[i];
        // }
        // for (int i = 0; i < 4; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // int cnt = 0;
        // for (int i = 1; i < 4; i++)
        // {
        //     if (a[i] > a[0])
        //     {
        //         cnt++;
        //     }
        // }
        // cout << cnt << endl;
    }

    return 0;
}