#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                char c = s[i];
                int ch = c - '0';
                sum1 = sum1 + ch;
            }
            else
            {
                char c = s[i];
                int ch = c - '0';
                sum2 = sum2 + ch;
            }
        }

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}