//https://codeforces.com/problemset/problem/540/A
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

    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++)
    {
        if (abs(s[i] - t[i]) >= 6)
            sum += 9 - max(s[i], t[i]) + min(s[i], t[i]) + 1;
        else
            sum += abs(s[i] - t[i]);
    }
    cout << sum;

    return 0;
}
