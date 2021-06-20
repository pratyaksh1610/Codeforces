//https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t = 0;
    cin >> n;

    while (n != 0)
    {
        t = n / 100;
        n = n % 100;

        t = t + n / 20;
        n = n % 20;

        t = t + n / 10;
        n = n % 10;

        t = t + n / 5;
        n = n % 5;

        t = t + n / 1;
        n = n % 1;
    }

    cout << t;
    return 0;
}

/*
denomination in the form of { 100, 20, 10, 5, 1 } dollar bills 
*/