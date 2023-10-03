#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long x, y;
    cin >> x >> y;
    vector<long long> v;

    v.push_back(x);

    long long i = x * 2;
    while (i <= y)
    {
        long long lastVal = v[v.size() - 1];
        if (i == lastVal * 2)
        {
            v.push_back(i);
            i = v[v.size() - 1] * 2;
        }
    }

    cout << v.size() << endl;

    return 0;
}