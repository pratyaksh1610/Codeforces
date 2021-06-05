//https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;

int stones(int n, string s)
{
    int i, count = 0;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
            count++;
    }
    return count;
}

int main()
{
    int n, count = 0;
    cin >> n;

    string s;
    cin >> s;

    int res = stones(n, s);
    cout << res;
    return 0;
}