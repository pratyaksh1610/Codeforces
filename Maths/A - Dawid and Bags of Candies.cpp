//https://codeforces.com/contest/1230/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b == c + d)
        cout << "Yes";

    else if (a + c == b + d)
        cout << "Yes";

    else if (b + c == d + a)
        cout << "Yes";

    else if (d + b == a + c)
        cout << "Yes";

    else if (a + d == b + c)
        cout << "Yes";

    else if (a + b + c == d)
        cout << "Yes";

    else if (b + c + d == a)
        cout << "Yes";

    else if (c + d + a == b)
        cout << "Yes";

    else if (d + b + a == c)
        cout << "Yes";

    else
        cout << "No";

    return 0;
}

/*
Test_case -> 3, 14, 36, 53
Output ->     YES

Each bag must be given to one of his friends 
Various possibilities are encountered 

*/