#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        int ansI = 0, ansJ = 0;
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (a[i][j] == '#')
                {
                    if (a[i - 1][j + 1] == '#' && a[i - 1][j - 1] == '#' && a[i + 1][j - 1] == '#' && a[i + 1][j + 1] == '#')
                    {
                        ansI = i + 1,
                        ansJ = j + 1;
                        break;
                    }
                }
            }
            // cout << endl;
        }

        cout << ansI << " " << ansJ << endl;
    }
    return 0;
}