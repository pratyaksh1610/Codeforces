//Problem Link - https://codeforces.com/problemset/problem/515/A
/*By Pratyaksh Khurana*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, s;
    cin >> a >> b >> s;

    int steps = abs(a) + abs(b);
    if (s > steps)
    {
        if (abs(s - steps) % 2 == 0)
            cout << "Yes";
        else
            cout << "No";
    }
    else if (s == steps)
        cout << "Yes";

    else
        cout << "No";

    return 0;
}