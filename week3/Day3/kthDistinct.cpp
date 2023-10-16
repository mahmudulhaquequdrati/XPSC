#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> ar = {"a", "b", "a"};
    int k = 3;
    vector<string> v;

    map<string, int> mp;

    for (auto i : ar)
    {
        mp[i]++;
    }
    for (auto i : ar)
    {
        if (mp[i] == 1)
        {
            v.push_back(i);
        }
    }

    if (k <= v.size())
    {
        cout << v[k - 1] << endl;
    }
    else
    {
        cout << " ";
    }

    return 0;
}