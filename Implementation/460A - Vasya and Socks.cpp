// https://codeforces.com/problemset/problem/460/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        if (i * m <= n)
            ++n;

    cout << n;

    return 0;
}
