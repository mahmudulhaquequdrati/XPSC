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
        vector<int> arr(n);
        map<int, int> cnt;
        set<int> s;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            cnt[arr[i]]++;
            s.insert(arr[i]);
            s.insert(arr[i] + 1);
        }
        int ans = 0;
        int l = 0;
        for (auto x : s)
        {
            int c = cnt[x];
            ans += max(0, c - l);
            l = c;
        }
        cout << ans << endl;
    }

    return 0;
}