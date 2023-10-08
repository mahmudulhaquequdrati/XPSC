
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    while (n > 0)
    {
        n = n / k;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}