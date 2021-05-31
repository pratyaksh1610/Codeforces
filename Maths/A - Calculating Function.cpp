//https://codeforces.com/contest/486/problem/A
#include <bits/stdc++.h>
using namespace std;

long long fun(long long n)
{
    if (n % 2 == 0)
        return (n / 2);
    else
        return ((n / 2) - n);
}

int main()
{
    long long n;
    cin >> n;

    long long res = fun(n);
    cout << res;
    return 0;
}

/*implementation math series*/