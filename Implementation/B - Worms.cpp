//Problem Link - https://codeforces.com/contest/474/problem/B
/*By - Pratyaksh Khurana*/
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
    int a[n];
    vector<int> start(n), end(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    start[0] = 1;
    end[0] = a[0];

    //Prefix sum of end[n]
    for (int i = 1; i < n; i++)
    {
        start[i] = start[i - 1] + a[i - 1];
        end[i] = end[i - 1] + a[i];
    }

    cout << endl;
    int m;
    cin >> m;

    vector<int>::iterator low1;

    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;

        low1 = lower_bound(end.begin(), end.end(), q);
        cout << (low1 - end.begin()) + 1 << endl;
    }

    return 0;
}

/*
lower bound  - just greater value than q
*/