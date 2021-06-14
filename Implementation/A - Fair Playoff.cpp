//https://codeforces.com/contest/1535/problem/A
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
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        vector<int> v;
        v.push_back(s1);
        v.push_back(s2);
        v.push_back(s3);
        v.push_back(s4);

        int a = max(s1, s2);
        int b = max(s3, s4);

        sort(v.begin(), v.end());

        int c = v[3];
        int d = v[2];

        if (a == c && b == d || a == d && b == c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}