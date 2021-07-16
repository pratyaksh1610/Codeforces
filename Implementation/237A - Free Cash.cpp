//Problem Link - https://codeforces.com/problemset/problem/237/A
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

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        v.push_back(make_pair(h, m));
    }

    int ans = -1, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n)
            break;
        if (v[i].first == v[i + 1].first &&
            v[i].second == v[i + 1].second)
            count++;

        else
        {
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(ans, count);
    cout << ans + 1;

    return 0;
}
