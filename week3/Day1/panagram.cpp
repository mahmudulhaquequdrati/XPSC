#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int frq[26] = {0};
    for (auto &&i : s)
    {
        frq[i - 'a']++;
    }
    bool ok = true;
    for (int i = 0; i < 26; i++)
    {
        if (frq[i] == 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}