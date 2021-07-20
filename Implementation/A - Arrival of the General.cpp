//Problem Link - https://codeforces.com/contest/144/problem/A
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
    vector<int> v;

    for (int i = 0; i < n; i++)
    {

        int u;
        cin >> u;
        v.push_back(u);
    }

    int l = max_element(v.begin(), v.end()) - v.begin();
    int m = v[0], s;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= m)
        {
            m = v[i];
            s = i;
        }
    }

    if (l < s)
        cout << l + (n - 1) - s;

    else if (l > s)
        cout << (n - 1) - s + l - 1;

    return 0;
}

/*
?Find minimum swaps so that 

v[0] has the max. element ;
v[v.size()-1] has the minimum element .

*/