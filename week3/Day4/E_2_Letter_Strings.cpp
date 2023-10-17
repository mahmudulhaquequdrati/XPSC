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
        vector<string> v;
        map<char, int> mpFrist;
        map<char, int> mpLast;
        map<string, int> mpString;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            mpFrist[s[0]]++;
            mpLast[s[1]]++;
            mpString[s]++;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            // char frist =
            cnt += abs(mpFrist[v[i][0]] - mpString[v[i]]);
        }
        cout << cnt << endl;
    }

    return 0;
}