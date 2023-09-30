#include <bits/stdc++.h>
using namespace std;
int main()
{

    int u, v;
    cin >> u >> v;
    int cnt = 0;
    if (u >= v)
        cout << "0" << endl;
    else
    {
        for (int i = u; i <= v; i++)
        {
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}