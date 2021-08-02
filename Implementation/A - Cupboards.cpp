//Problem Link - https://codeforces.com/contest/248/problem/A
/*By Pratyaksh Khurana*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    }

    int one = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == 1)
            one++;
        else if (a[i][0] == 0)
            z++;
    }

    int p = min(one, z);

    one = 0, z = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i][1] == 1)
            one++;
        else if (a[i][1] == 0)
            z++;
    }

    int q = min(z, one);
    cout << p + q;

    return 0;
}