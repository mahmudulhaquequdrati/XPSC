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
        string s;
        cin >> s;
        vector<int> lowerS;
        for (auto &&i : s)
        {
            char ch = tolower(i);
            lowerS.push_back(int(ch));
        }

        auto new_it = unique(lowerS.begin(), lowerS.end());
        string cmp;
        for (auto it = lowerS.begin(); it != new_it; it++)
        {
            cmp += *it;
        }

        if (cmp == "meow")
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