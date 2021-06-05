// https: //codeforces.com/problemset/problem/25/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i, even = 0, odd = 0;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i + 1;
                break;
            }
        }
    }
    else if (odd == 1)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i + 1;
                break;
            }
        }
    }
    return 0;
}

/*
?output index of number that differs from other from eveness
parity - property of being even / odd
two even(2,4) integers have same parity
calculate total even and total odd , either of them is equal to 1 print its index
*/