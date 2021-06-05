//https://codeforces.com/contest/1520/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s, t = "";
        cin >> s;
        t = s.substr(0, 1);
        for (int i = 1; i < s.size(); i++)
        {
            char curr = s[i];
            char prev = s[i - 1];
            if (curr != prev)
            {
                t = t + s[i];
            }
        }

        int a[26], op = 0;
        for (int i = 0; i < 26; i++)
            a[i] = 0;

        for (int i = 0; i < t.size(); i++)
            a[t[i] - 'A']++;

        for (int i = 0; i < 26; i++)
        {
            if (a[i] > 1)
            {
                op = 1;
                break;
            }
        }
        if (op == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}