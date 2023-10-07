#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int pre[n];
    pre[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + ar[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << (pre[b] - pre[a]) + ar[a] << endl;
    }

    return 0;
}