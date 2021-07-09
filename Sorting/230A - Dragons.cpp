//https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i].first < s)
            s += v[i].second;

        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "NO";

    else
        cout << "YES";

    return 0;
}

/*
created vector of pair i.e vector < pair<int,int> > v;

if we sort vector of pair then by default it gets sorted on
the basis of first element of pair.
as Kirito can fight in any order then it is optimal to fight in 
increasing order to reach a level and adding bonus to his strength
and iterating and kept a check; 

*/