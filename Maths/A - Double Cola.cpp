//https://codeforces.com/contest/82/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    n--;

    while (n >= 5)
    {
        n -= 5;
        n /= 2;
    }

    int ans = n;

    if (ans == 0)
        cout << "Sheldon";

    else if (ans == 1)
        cout << "Leonard";

    else if (ans == 2)
        cout << "Penny";

    else if (ans == 3)
        cout << "Rajesh";

    else if (ans == 4)
        cout << "Howard";

    return 0;
}