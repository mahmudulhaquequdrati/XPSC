#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> v;
        int max_val = s - r;
        v.push_back(max_val);
        int b = n - 1;
        for (int i = 0; i < n - 1; i++)
        {
            int a = r / b;
            r = r - a;
            b--;
            v.push_back(a);
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}