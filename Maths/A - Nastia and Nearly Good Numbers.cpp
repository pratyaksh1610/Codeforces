//https://codeforces.com/contest/1521/problem/A
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
        long long a, b;
        cin >> a >> b;

        if (b == 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << a << ' ' << a * b << ' ' << a * (b + 1) << endl;
        }
    }

    return 0;
}

/*
?find x,y,z such that x + y = z;
So,
=> x * (A * B) + y * A = z * A;
put x = 1 , y = 1;
  z = 1 + B ;
  
  (A * B) + A = ( A * (B + 1) );
     p      q         r
 => print p, q, r
*/