//https://codeforces.com/problemset/problem/1186/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    if (m - n >= 0 && k - n >= 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
/*
?each person should recieve atleast 1 pen and 1 notebook
*/