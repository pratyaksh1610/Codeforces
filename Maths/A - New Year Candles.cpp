//https://codeforces.com/contest/379/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    int count = a, left = 0;

    while (a >= b)
    {
        count += (a / b);
        a = (a / b) + (a % b);
    }

    cout << count;

    return 0;
}