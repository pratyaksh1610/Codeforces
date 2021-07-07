//https://codeforces.com/contest/1374/problem/A

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
        int x, y, n;
        cin >> x >> y >> n;

        int tmp = n % x;

        if (tmp == y)
            cout << n << endl;

        else if (tmp > y)
            cout << n - (tmp - y) << endl;

        else if (tmp < y)
            cout << n + (y - tmp) - x << endl;
    }

    return 0;
}

/* TLE Error

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
        int x, y, n, flag;
        cin >> x >> y >> n;

        for (int i = n; i >= 0; i--)
        {
            if ((i - y) % x == 0)
            {
                flag = i;
                break;
            }
        }

        cout << flag << endl;
    }

    return 0;
}
*/