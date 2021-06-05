//https : //codeforces.com/problemset/problem/1328/A
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

        int a, b, count = 0;
        cin >> a >> b;

        while (1)
        {
            if (a % b == 0)
            {
                cout << 0 << endl;
                break;
            }

            else
            {
                cout << b - (a % b) << endl;
                break;
            }
        }
    }

    return 0;
}

/*
(b - (a%b))
*/