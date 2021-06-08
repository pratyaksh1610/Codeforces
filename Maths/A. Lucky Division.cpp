//https://codeforces.com/contest/122/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, dig = 0, count = 0;
    cin >> n;
    int num = n;

    while (n > 0)
    {
        int ls = n % 10;
        dig++;

        if (ls == 4 || ls == 7)
            count++;
        n = n / 10;
    }

    if (dig == count)
        cout << "YES";
    else
    {
        if (num % 4 == 0 || num % 7 == 0 || num % 47 == 0)
            cout << "YES";

        else
            cout << "NO";
    }

    return 0;
}
