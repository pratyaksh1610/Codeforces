// https://codeforces.com/contest/1472/problem/A
/*  By Pratyaksh Khurana */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;

        int count = 1;
        while (w % 2 == 0 || h % 2 == 0)
        {
            if (h % 2 == 0)
            {
                h /= 2;
                count *= 2;
            }

            else if (w % 2 == 0)
            {
                w /= 2;
                count *= 2;
            }
        }
        if (count >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}