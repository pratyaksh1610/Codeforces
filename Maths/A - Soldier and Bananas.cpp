//https://codeforces.com/contest/546/problem/A
#include <iostream>
using namespace std;

int main()
{
    int k, n, w, i = 1, cost = 0;
    cin >> k >> n >> w;

    while (i <= w)
    {
        cost = cost + i * k;
        i++;
    }

    if (cost - n >= 0)
        cout << cost - n << "\n";
    else
        cout << 0;

    return 0;
}
