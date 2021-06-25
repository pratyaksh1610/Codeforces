//https://codeforces.com/problemset/problem/34/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());

    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        if (v[i] < 0)
            sum += abs(v[i]);
    }
    cout << sum;

    return 0;
}

/*
if price < 0 he will be paid..
find max money that he can earn  
*/