//https://codeforces.com/contest/1547/problem/A
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
        int xa, ya, xb, yb, xf, yf;
        cin >> xa >> ya >> xb >> yb >> xf >> yf;

        if (xa != xb && xb != xf && ya != yb && yb != yf)
            cout << abs(xa - xb) + abs(ya - yb) << endl;

        else
        {
            if (xa == xb && xb == xf)
            {
                if ((yf > ya && yf < yb) || (yf < ya && yf > yb))
                    cout << abs(ya - yb) + 2 << endl;
                else
                    cout << abs(xa - xb) + abs(ya - yb) << endl;
            }

            else if (ya == yb && yb == yf)
            {
                if ((xf > xa && xf < xb) || (xf < xa && xf > xb))
                    cout << abs(xa - xb) + 2 << endl;
                else
                    cout << abs(ya - yb) + abs(xa - xb) << endl;
            }
            else
                cout << abs(xa - xb) + abs(ya - yb) << endl;
        }
    }

    return 0;
}

/*
Shortest path between two points A and B
*/