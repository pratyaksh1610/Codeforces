//Problem Link - https://codeforces.com/problemset/problem/386/A
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
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int nl;
        cin >> nl;
        v.push_back(nl);
    }

    int maxx = *max_element(v.begin(), v.end());
    int index_max = max_element(v.begin(), v.end()) - v.begin();
    index_max += 1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxx)
        {
            v[i] = -1;
            break;
        }
    }

    int index_maxx = *max_element(v.begin(), v.end());
    cout << index_max << " " << index_maxx;
    return 0;
}