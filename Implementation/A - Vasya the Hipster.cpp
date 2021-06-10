//https://codeforces.com/contest/581/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, min_times, max_times;
    cin >> a >> b;

    max_times = min(a, b);
    if (max_times == a)
    {
        b = b - a;
        min_times = b / 2;
    }

    else if (max_times == b)
    {
        a = a - b;
        min_times = a / 2;
    }
    cout << max_times << " " << min_times;
    return 0;
}
