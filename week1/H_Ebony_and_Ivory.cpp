#include <bits/stdc++.h>
using namespace std;
// int dp[10005] = {0};
// bool sliceF(int a, int b, int k)
// {
//     if (k == 0)
//         return 1;
//     if (k < 0)
//         return 0;
//     if (dp[k] != 0)
//         return dp[k];

//     return dp[k] = sliceF(a, b, k - a) || sliceF(a, b, k - b);
// }

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;

    for (int i = 0; i * a <= c; i++)
    {
        for (int j = 0; (i * a) + (j * b) <= c; j++)
        {
            if ((i * a) + (j * b) == c)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // if (sliceF(a, b, c))
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout << "No" << endl;
    // }

    return 0;
}