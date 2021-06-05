//https://codeforces.com/contest/158/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, count = 0;
    cin >> n >> k;
    int scores[n];

    for (i = 1; i <= n; i++)
        cin >> scores[i];

    for (i = 1; i <= n; i++)
    {
        if (scores[i] >= scores[k] && scores[i])
            count++;
    }

    cout << count;
    return 0;
}