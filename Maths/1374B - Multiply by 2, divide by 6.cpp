//https://codeforces.com/problemset/problem/1374/B
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
        int n, count = 0;
        cin >> n;

        while (1)
        {
            if (n == 1 || n < 0)
                break;

            if (n % 6 == 0)
            {
                n = n / 6;
                count++;
            }
            else
            {
                n = n * 2;
                count++;
            }
        }

        if (n == 1)
            cout << count << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
