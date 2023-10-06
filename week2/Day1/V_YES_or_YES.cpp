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
        if (s == "YES" || s == "yes" || s == "yeS" || s == "yEs" || s == "yES" || s == "YeS" || s == "YEs" || s == "YeS" || s == "Yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}