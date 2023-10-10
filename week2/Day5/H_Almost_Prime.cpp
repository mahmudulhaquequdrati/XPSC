#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> primeNumbers;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            primeNumbers.push_back(i);
        }
    }
    int cnt = 0;

    for (int num = 2; num <= n; ++num)
    {
        int p_divisor = 0;
        for (int p : primeNumbers)
        {
            if (num % p == 0)
            {
                p_divisor++;
            }
        }
        if (p_divisor == 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}