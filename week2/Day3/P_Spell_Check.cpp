
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
        string main = "Timur";
        map<char, int> mp1;
        for (auto u : main)
        {
            mp1[u]++;
        }

        map<char, int> mp2;
        for (auto u : s)
        {
            mp2[u]++;
        }
        bool ok = true;
        if (s.size() != main.size())
        {
            ok = false;
        }
        for (auto u : main)
        {
            if (mp1[u] != mp2[u])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}