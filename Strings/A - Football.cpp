// Problem Link - https://codeforces.com/contest/43/problem/A
/* By - Pratyaksh Khurana */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    string temp = v[0], t;
    int a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
        if (temp == v[i])
            a++;

        else
        {
            t = v[i];
            b++;
        }
    }

    if (a > b)
        cout << temp;
    else
        cout << t;

    return 0;
}