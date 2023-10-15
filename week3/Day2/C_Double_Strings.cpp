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
        vector<string> st(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s] = true;
            st[i] = s;
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            string str = st[i];
            for (int j = 0; j < str.size(); j++)
            {
                string a = str.substr(0, j + 1);
                string b = str.substr(j + 1, str.size());

                if (mp.find(a) != mp.end() && mp.find(b) != mp.end())
                {
                    ans[i] = 1;
                    break;
                }
                else if (mp.find(a) != mp.end() && a + a == str)
                {
                    ans[i] = 1;
                    break;
                }
                else if (mp.find(b) != mp.end() && b + b == str)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }

        for (auto &&i : ans)
        {
            cout << i;
        }
        cout << '\n';
    }

    return 0;
}