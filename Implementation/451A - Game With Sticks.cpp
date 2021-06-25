//https://codeforces.com/problemset/problem/451/A
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

    while (1)
    {
        n -= 1;
        m -= 1;
        if (n == 0 || m == 0)
        {
            cout << "Akshat";
            break;
        }
        n -= 1;
        m -= 1;

        if (n == 0 || m == 0)
        {
            cout << "Malvika";
            break;
        }
    }

    return 0;
}