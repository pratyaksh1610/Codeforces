//https://codeforces.com/contest/1450/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    int total;

    for (int i = 0; i < n; i++)
    {
        total = 0;
        for (int j = 0; j < n; j++)
        {
            if (abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) <= k)
                total++;
        }

        if (total == n)
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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
        solve();
    }

    return 0;
}

/*
some balls with their coordinates are given and a parameter k
is given
can select any ball any charge it and after that 
all balls with manhattan distance i.e |x2 - x1| + |y2 - y1| <= k
will come at position of charged ball
find min. operations to do so

it can be either 1 or not possible acc to test cases
so e find one such ball , if that one is considered then 
all balls come to that position only at once by keeping a counter
if possible print 1;
else print -1;

*/