//https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, k;
    cin >> n >> k;
    long long odd, even;

    even = n / 2;
    odd = (n + 1) / 2;

    if (n % 2 == 0)
    {
        if (k <= even)
            cout << 1 + (k - 1) * 2;

        else if (k > even)
            cout << 2 + (k - even - 1) * 2;
    }
    else
    {
        if (k > odd)
            cout << 2 + (k - odd - 1) * 2;
        else if (k <= odd)
            cout << 1 + (k - 1) * 2;
    }

    return 0;
}

/*
?find element at Kth position
calculate middle element i.e acc. to n is even/odd
Arithmetic Progression (AP), nTh term
*/