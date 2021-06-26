//https://codeforces.com/contest/1303/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int l = -1, r = -1;
        string s;
        cin >> s;

        if (s.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                l = i;
                break;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                r = i;
                break;
            }
        }
        int count = 0;
        for (int i = l + 1; i <= r - 1; i++)
        {
            if (s[i] == '0')
                count++;
        }
        cout << count << endl;
    }

    return 0;
}