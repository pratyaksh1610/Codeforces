//https://codeforces.com/problemset/problem/80/A

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, p;
    cin >> n >> m;

    for (int i = n + 1; i < INT_MAX; i++)
    {
        if (__gcd(n, i) == 1 && isPrime(i))
        {
            p = i;
            break;
        }
    }
    if (p == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
?find next prime number after n

Problem statement guarantees that n is prime number. We need to check only two cases:

1. Number m is prime, and

2. There is no any prime number between n and m

*/