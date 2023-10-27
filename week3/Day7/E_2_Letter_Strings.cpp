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
        vector<string> v(n);

        map<char, long long> fir;
        map<char, long long> sec;
        map<string, long long> st;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st[v[i]]++;
            fir[v[i][0]]++;
            sec[v[i][1]]++;
        }
        long long cnt = 0;

        for (int i = 0; i < n; i++)
        {
            string s = v[i];
            char firstCh = v[i][0];
            char secondCh = v[i][1];
            cnt += (fir[firstCh] - 1) - (st[s] - 1);
            cnt += (sec[secondCh] - 1) - (st[s] - 1);
            st[s]--;
            fir[firstCh]--;
            sec[secondCh]--;
        }

        cout << cnt << endl;
    }
    return 0;
}