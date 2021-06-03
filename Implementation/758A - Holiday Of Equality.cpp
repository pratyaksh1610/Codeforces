//https://codeforces.com/problemset/problem/758/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, money = 0;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int large = v[0];
    for (int i = 1; i < n; i++)
    {
        if (large < v[i])
            large = v[i];
    }
    for (int i = 0; i < n; i++)
        money += (large - v[i]);

    cout << money;
    return 0;
}
