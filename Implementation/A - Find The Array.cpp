//https://codeforces.com/contest/1550/problem/A
/*By- Pratyaksh Khurana*/

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
        int s, p;
        cin >> s;

        for (int i = 1; i <= s; i++)
        {
            if (i * i >= s)
            {
                p = i;
                break;
            }
        }
        cout << p << endl;
    }

    return 0;
}
