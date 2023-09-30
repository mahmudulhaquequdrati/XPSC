#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    int result = 0;
    for (int i = 0; i < 2; i++)
    {
        // int maxV = max(a, b);

        if (a > b)
        {
            result += a;
            a--;
        }
        else
        {
            result += b;
            b--;
        }
    }

    cout << result << endl;

    return 0;
}