#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> words = {"hey", "aeo", "mu", "ooo", "artro"};

    int left = 1;
    int right = 4;

    int cnt = 0;

    for (int i = left; i <= right; i++)
    {
        string st = words[i];
        if ((st[0] == 'a' || st[0] == 'e' || st[0] == 'i' || st[0] == 'o' || st[0] == 'u') && (st[st.size() - 1] == 'a' || st[st.size() - 1] == 'e' || st[st.size() - 1] == 'i' || st[st.size() - 1] == 'o' || st[st.size() - 1] == 'u'))
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}