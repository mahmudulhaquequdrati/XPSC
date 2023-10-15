#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    vector<vector<int>> rotated(2, vector<int>(2));

    rotated[0][0] = matrix[1][0];
    rotated[0][1] = matrix[0][0];
    rotated[1][0] = matrix[1][1];
    rotated[1][1] = matrix[0][1];

    return rotated;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> arr(2, vector<int>(2));

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }

        bool ok = false;

        vector<vector<int>> rMatrix = arr;

        for (int rotation = 0; rotation < 4; rotation++)
        {
            if (rMatrix[0][0] > rMatrix[0][1] && rMatrix[1][0] > rMatrix[1][1])
            {
                if (rMatrix[0][0] > rMatrix[1][0] && rMatrix[0][1] > rMatrix[1][1])
                {
                    ok = true;
                    break;
                }
            }
            rMatrix = rotate(rMatrix);
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
};
