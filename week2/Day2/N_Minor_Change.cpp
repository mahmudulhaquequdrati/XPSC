#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, s1;
    cin >> s >> s1;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s1[i])
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}