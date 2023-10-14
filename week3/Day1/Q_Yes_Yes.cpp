#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string st = "Yes";
        for (int i = 0; i < 50; i++)
        {
            st += "Yes";
        }
        if (st.find(s) != -1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}