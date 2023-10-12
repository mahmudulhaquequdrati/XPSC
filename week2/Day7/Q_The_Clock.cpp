#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        int initailHour = stoi(s.substr(0, 2));
        int initailMin = stoi(s.substr(3, 2));
        int hourS = initailHour;
        int minS = initailMin;

        vector<string> v;

        while (true)
        {
            int h = x / 60;
            int m = x % 60;
            int mins = (minS + m) % 60;
            int hours = (hourS + h + ((minS + m) / 60)) % 24;
            // cout << hourS << ":" << minS << endl;
            // cout << hours << ":" << mins << endl;

            string hourInVector;
            string minInVector;
            if (hours < 10)
            {
                string HourString = "0";
                HourString += to_string(hours);
                hourInVector = HourString;
            }
            else
            {
                hourInVector = to_string(hours);
            }

            if (mins < 10)
            {
                string MinString = "0";
                MinString += to_string(mins);
                minInVector = MinString;
            }
            else
            {
                minInVector = to_string(mins);
            }
            string hour_min;
            hour_min += hourInVector;
            hour_min += minInVector;
            v.push_back(hour_min);
            hourS = hours;
            minS = mins;
            if (initailHour == hours && initailMin == mins)
            {
                break;
            }
            // tt--;
        }
        int cnt = 0;
        for (auto i : v)
        {
            string original = i;
            reverse(original.begin(), original.end());
            // cout << i << " " << original << endl;
            if (i == original)
            {
                cnt++;
            }
        }

        cout << cnt << endl;

        // cout << hours << ":" << mins << endl;
    }

    return 0;
}