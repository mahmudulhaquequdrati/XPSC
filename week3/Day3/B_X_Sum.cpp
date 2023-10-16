#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int maxSum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = arr[i][j];

                for (int k = 1; i + k < n && j + k < m; k++)
                {
                    sum += arr[i + k][j + k];
                }
                for (int k = 1; i + k < n && j - k >= 0; k++)
                {
                    sum += arr[i + k][j - k];
                }
                for (int k = 1; i - k >= 0 && j + k < m; k++)
                {
                    sum += arr[i - k][j + k];
                }
                for (int k = 1; i - k >= 0 && j - k >= 0; k++)
                {
                    sum += arr[i - k][j - k];
                }

                maxSum = max(maxSum, sum);
            }
        }

        cout << maxSum << endl;
    }

    return 0;
}