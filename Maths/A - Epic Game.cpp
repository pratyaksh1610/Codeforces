//https://codeforces.com/contest/119/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, n, ans;
    cin >> a >> b >> n;

    while (1)
    {
        int t, temp;

        temp = __gcd(a, n);
        n -= temp;
        if (n < __gcd(b, n))
        {
            ans = 0;
            break;
        }

        t = __gcd(b, n);
        n -= t;
        if (n < __gcd(a, n))
        {
            ans = 1;
            break;
        }
    }

    cout << ans;

    return 0;
}