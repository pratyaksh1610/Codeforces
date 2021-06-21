//https://codeforces.com/contest/750/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, count = 0, time = 0;
    cin >> n >> k;

    //time left to solve problems in contest
    k = 240 - k;

    for (int i = 1; i <= n; i++)
    {
        time = time + 5 * i;
        if (time > k)
            break;
        count++;
    }

    cout << count;

    return 0;
}

/*
brute force i.e
find time left to solve problems as
k = 240 - k (4 hr = 240 min)

now count no. of problems he will be able
to solve under this time and count

*/