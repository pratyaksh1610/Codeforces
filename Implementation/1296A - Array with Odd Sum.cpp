// https://codeforces.com/problemset/problem/1296/A

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
        int n, sum = 0, even = 0, odd = 0;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
                even++;
            else
                odd++;

            sum += a[i];
        }

        if (sum % 2 != 0)
            cout << "YES" << endl;
        else
        {
            if (even > 0 && odd > 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}