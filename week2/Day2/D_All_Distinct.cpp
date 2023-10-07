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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> s(a, a + n);

        int dif = n - s.size();
        if (dif % 2 == 0)
        {
            cout << s.size() << endl;
        }
        else
        {
            cout << s.size() - 1 << endl;
        }
    }

    return 0;
}
