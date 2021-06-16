//https://codeforces.com/problemset/problem/431/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            count += a;

        else if (s[i] == '2')
            count += b;

        else if (s[i] == '3')
            count += c;

        else if (s[i] == '4')
            count += d;
    }

    cout << count;

    return 0;
}