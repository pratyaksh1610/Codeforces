//https://codeforces.com/problemset/problem/1047/A

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

    if ((n - 2) % 3 != 0)
        cout << 1 << " " << 1 << " " << n - 2;
    else
        cout << 1 << " " << 2 << " " << n - 3;

    return 0;
}
