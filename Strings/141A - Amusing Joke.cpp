//https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string g, h, l;
    cin >> g >> h >> l;

    int a[26] = {0}, b[26] = {0};

    for (int i = 0; i < g.size(); i++)
        a[g[i] - 'A']++;

    for (int i = 0; i < h.size(); i++)
        a[h[i] - 'A']++;

    for (int i = 0; i < l.size(); i++)
        b[l[i] - 'A']++;

    int op;

    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}