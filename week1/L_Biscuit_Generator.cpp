#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    if (t < a)
    {
        ans = 0;
    }
    else
    {
        while (true)
        {
            if (t + 0.5 > a)
            {
                ans += b;
                t -= a;
            }
            else
            {
                break;
            }
        }
    }

    cout << ans;

    return 0;
}