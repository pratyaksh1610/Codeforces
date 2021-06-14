//https://codeforces.com/problemset/problem/1285/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l = 0, r = 0, count = 0;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            l--;
        else if (s[i] == 'R')
            r++;
    }

    for (int i = l; i <= r; i++)
        count++;

    cout << count;
    return 0;
}