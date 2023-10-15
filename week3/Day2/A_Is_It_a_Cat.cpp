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
        string s;
        cin >> s;
        bool ok = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (i == 0)
            {
                // cout << s[i] << endl;
                if (s[i] == 'm' || s[i] == 'M')
                {
                    if (s[i + 1] == 'm' || s[i + 1] == 'M' || s[i + 1] == 'e' || s[i + 1] == 'E')
                    {
                        ok = true;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                if (s[i] == 'm' || s[i] == 'M')
                {
                    if (s[i + 1] == 'm' || s[i + 1] == 'M' || s[i + 1] == 'e' || s[i + 1] == 'E')
                    {
                        ok = true;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else if (s[i] == 'e' || s[i] == 'E')
                {
                    if (s[i + 1] == 'e' || s[i + 1] == 'E' || s[i + 1] == 'o' || s[i + 1] == 'O')
                    {
                        ok = true;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else if (s[i] == 'o' || s[i] == 'O')
                {
                    if (s[i + 1] == 'o' || s[i + 1] == 'O' || s[i + 1] == 'w' || s[i + 1] == 'W')
                    {
                        ok = true;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else if (s[i] == 'w' || s[i] == 'W')
                {
                    if (s[i + 1] == 'w' || s[i + 1] == 'W' || s[i + 1] == 'm' || s[i + 1] == 'M')
                    {
                        ok = true;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}