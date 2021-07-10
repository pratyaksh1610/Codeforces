//https://codeforces.com/contest/630/problem/C
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
    long long ans = 0;

    for (int i = 1; i <= n; i++)
        ans += pow(2, i);

    cout << ans;
    return 0;
}

/*
if n = 1 
_  7 or 8 can come i.e 2^1

if n = 2
_ _ 77,87,88,78 can come i.e 2^2

*/