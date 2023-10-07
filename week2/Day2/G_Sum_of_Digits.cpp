#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    long long total = 0;

    long long cnt = 0;

    while (true)
    {

        // string t2 = to_string(s);
        if (s.size() == 1)
            break;
        total = 0;
        for (auto i : s)
        {
            total += (i - '0');
        }
        cnt++;
        s = to_string(total);
    }

    cout << cnt << endl;

    return 0;
}