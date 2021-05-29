//https://codeforces.com/contest/339/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s, t, res;
    cin >> s;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3')
            t += s[i];
    }

    sort(t.begin(), t.end());

    for (i = 0; i < t.size(); i++)
    {
        if (i == t.size() - 1)
            res = res + t[i];
        else
            res = res + t[i] + '+';
    }
    cout << res;

    return 0;
}
