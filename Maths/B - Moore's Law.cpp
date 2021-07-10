//https://codeforces.com/contest/630/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long t;
    long double ans = 1;
    cin >> n >> t;

    if (t % 2 == 0)
        ans = pow(pow(1.000000011, t / 2), 2);
    else
        ans = pow(pow(1.000000011, t / 2), 2) * 1.000000011;

    cout << fixed << setprecision(6) << (long double)(ans * n);

    return 0;
}

/*
fast exponentiation
*/