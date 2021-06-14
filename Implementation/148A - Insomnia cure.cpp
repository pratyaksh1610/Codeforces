//https://codeforces.com/problemset/problem/148/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, l, m, n, d, count = 0;
    cin >> k >> l >> m >> n >> d;
    bool a[d + 1] = {false}; // if a[d] then error will be there
                             // wrong memory access
    for (int i = k; i <= d; i += k)
    {
        a[i] = true;
        count++;
    }

    for (int i = l; i <= d; i += l)
    {
        if (a[i] == false)
        {
            a[i] = true;
            count++;
        }
    }
    for (int i = m; i <= d; i += m)
    {
        if (a[i] == false)
        {
            a[i] = true;
            count++;
        }
    }
    for (int i = n; i <= d; i += n)
    {
        if (a[i] == false)
        {
            a[i] = true;
            count++;
        }
    }
    cout << count;

    return 0;
}
