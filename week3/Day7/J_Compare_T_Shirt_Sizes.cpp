#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char ca = a.back();
        char cb = b.back();
        if (ca == cb)
        {
            if (a.size() == b.size())
                cout << '=';
            else if (ca == 'S')
            {
                cout << (a.size() < b.size() ? '>' : '<');
            }
            else
            {
                cout << (a.size() < b.size() ? '<' : '>');
            }
        }
        else
            cout << (ca < cb ? '>' : '<');
        cout << '\n';
    }

    return 0;
}