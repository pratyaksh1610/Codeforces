//https://codeforces.com/problemset/problem/1368/A

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
        int a, b, n, step = 0;
        cin >> a >> b >> n;

        int p = a;
        int q = b;

        while (1)
        {
            if (p > n || q > n)
                break;

            if (p < q)
                p += q;
            else
                q += p;
            step++;
        }
        cout << step << endl;
    }

    return 0;
}

/*

(a > n) || (b > n)

?Count minimum steps to satisfy above condition
add to smaller number the bigger one for minimum

a   b   n
1   2   3

3   2   3    <
3   5   3    < 

we get b > 3 so min. steps required to make 
a / b > n is 2

*/