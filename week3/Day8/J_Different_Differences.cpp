#include <bits/stdc++.h>
using namespace std;

vector<int> make(int f, int k)
{
    vector<int> result;
    for (int i = 0; i < k; ++i)
    {
        if (i < f - 1)
            result.push_back(i + 2);
        else
            result.push_back(1);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int k, n;
        cin >> k >> n;
        int ans = 1;
        for (int f = 1; f < k; ++f)
        {
            vector<int> d = make(f, k - 1);
            int sum_d = 0;
            for (int j = 0; j < k - 1; ++j)
            {
                sum_d += d[j];
            }
            if (sum_d <= n - 1)
            {
                ans = f;
            }
        }

        vector<int> res;
        res.push_back(1);
        vector<int> d = make(ans, k - 1);
        for (int x : d)
        {
            res.push_back(res.back() + x);
        }

        for (int x : res)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
