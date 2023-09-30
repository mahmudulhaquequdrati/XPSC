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
    string ans = "None";

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (frq[i - 'a'] == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}