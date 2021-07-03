//https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, sum = 0, count = 0, l = 1;
    cin >> n;

    while (sum < n)
    {
        sum = sum + l * (l + 1) / 2;
        if (sum > n)
            break;
        l++;
        count++;
    }
    cout << count;

    return 0;
}
