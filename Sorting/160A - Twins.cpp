//https://codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, sum = 0;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
        sum += v[i];
    }

    int coins = 0, sx = 0;

    sort(v.begin(), v.end());

    for (int i = n - 1; i >= 0; i--)
    {
        if (sx <= sum / 2)
        {
            sx += v[i];
            coins++;
        }
    }
    cout << coins;

    return 0;
}