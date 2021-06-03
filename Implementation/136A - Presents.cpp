//https://codeforces.com/problemset/problem/136/A
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
    int a[n], inv[n];

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        int pos = i;
        inv[a[i]] = pos;
    }

    for (int i = 1; i <= n; i++)
        cout << inv[i] << " ";

    return 0;
}
/*
inverse of array 
index -> position
position -> index
*/