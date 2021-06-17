//https://codeforces.com/problemset/problem/705/A
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
    string s, t = "I hate that", k = "I love that";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            s = s + t;

        else
            s = s + k;

        if (i < n)
            s = s + ' ';
    }
    for (int i = 1; i <= 4; i++)
    {
        s.pop_back();
    }

    s = s + "it";
    cout << s;

    return 0;
}

/*
removing last word and swapping
with the other word i.e "it"
*/