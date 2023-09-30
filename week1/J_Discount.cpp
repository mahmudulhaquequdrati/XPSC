#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;

    float dis = ((a - b) * 100.0) / a;

    cout << fixed << setprecision(10) << dis << endl;

    return 0;
}