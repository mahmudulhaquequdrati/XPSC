#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    stack<int> st;

    int cntDigit = 0;
    while (x)
    {
        cntDigit++;
        st.push(x % 10);
        // cout << x % 10 << " ";
        x = x / 10;
    }

    int remainig = 4 - cntDigit;
    // cout << remainig;
    if (remainig > 0)
    {
        for (int i = 0; i < remainig; i++)
        {
            cout << 0;
        }
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}