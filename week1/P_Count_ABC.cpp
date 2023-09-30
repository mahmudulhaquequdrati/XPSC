#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            string a = "A";
            for (int j = i + 1; j < i + 3; j++)
            {
                a += s[j];
            }
            if (a == "ABC")
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}