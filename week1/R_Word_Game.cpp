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
        vector<vector<string>> v(3);

        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {

            // vector<string> ss;
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                v[i].push_back(s);
                mp[s]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int cnt = 0;
            for (int j = 0; j < v[i].size(); j++)
            {

                if (mp[v[i][j]] == 1)
                {
                    cnt += 3;
                }
                else if (mp[v[i][j]] == 2)
                {
                    cnt += 1;
                }
                else
                {
                    cnt += 0;
                }
            }
            cout << cnt << " ";
        }
        cout << endl;
    }

    return 0;
}