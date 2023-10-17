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
        string st;
        cin >> st;
        map<string, int> m;

        int cnt = 0;
        for (int i = 0; i < st.size() - 1; i++)
        {
            string s = st.substr(i, 2);
            if (m[s] == 0)
            {
                m[s]++;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}