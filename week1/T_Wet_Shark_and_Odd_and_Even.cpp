#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    long long firstOdd = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            firstOdd = a[i];
            break;
        }
    }
    // cout << sum << endl;

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        long long lowest = a[0];
        long long c = sum - lowest;
        if (c % 2 == 0)
        {
            cout << c << endl;
        }
        else
        {
            cout << sum - firstOdd << endl;
        }
    }

    // cout << sum;

    return 0;
}