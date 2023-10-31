#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        bool flag = true;
        sort(ar, ar + n);
        if (ar[0] % 2 != 0)
        {
            flag = true;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (ar[i] % 2 != 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}