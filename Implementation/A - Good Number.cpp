//Problem Link - https://codeforces.com/contest/365/problem/A
/*By - Pratyaksh Khurana*/

#include <bits/stdc++.h>
using namespace std;

int dig(int n, int k)
{
    set<int> s;

    while (n > 0)
    {
        int ls = n % 10;
        if (ls >= 0 && ls <= k)
            s.insert(ls);

        n /= 10;
    }

    if (s.size() == k + 1)
        return 1;
    return 0;
}

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, h, c = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        h = dig(p, k);
        if (h == 1)
            c++;
    }
    cout << c;

    return 0;
}