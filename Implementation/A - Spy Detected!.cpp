//https://codeforces.com/contest/1512/problem/A
#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int lrg = a[0]; //largest among array
    for (int i = 1; i <= n; i++)
    {
        if (lrg < a[i])
            lrg = a[i];
    }

    int index;
    int b[lrg + 1]; //hash array
    for (int i = 1; i <= lrg + 1; i++)
        b[i] = 0;

    for (int i = 1; i <= n; i++)
        b[a[i]]++; //hashing
    for (int i = 1; i <= lrg + 1; i++)
    {
        if (b[i] == 1)
        {
            index = i;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (index == a[i])
        {
            cout << i << endl;
            break;
        }
    }
}

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
        fun();
    }

    return 0;
}
