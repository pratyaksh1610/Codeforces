//https://codeforces.com/contest/1541/problem/B
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

        long long p[n + 1];

        for (int i = 1; i < n + 1; i++)
            cin >> p[i];

        for (int i = 1; i <= n; i++)
        {
            for (int j = p[i] - i; j <= n; j += p[i])
            {
                if (j > 0)
                    if (p[i] * p[j] == i + j && i < j)
                        count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}