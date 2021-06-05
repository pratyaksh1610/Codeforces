//https://codeforces.com/contest/703/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c, a = 0, b = 0;
    cin >> n;

    while (n--)
    {
        cin >> m >> c;
        if (m > c)
            a++; //Mishka wins
        else if (m < c)
            b++; //Chris wins
    }

    if (a > b)
        cout << "Mishka";
    else if (a < b)
        cout << "Chris";
    else if (a == b)
        cout << "Friendship is magic!^^";

    return 0;
}