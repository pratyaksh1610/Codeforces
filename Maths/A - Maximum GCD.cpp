//https://codeforces.com/contest/1370/problem/A
#include <bits/stdc++.h>
using namespace std;

/*
int gcd(int a, int b)
{
    while (b != 0)
    {
        int res = a % b;
        a = b;
        b = res;
    }

    return a;
}
 euclid gcd function
*/

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
        int n;
        cin >> n;
        cout << n / 2 << "\n";
    }

    return 0;
}

/*
?maximum gcd of a pair from 1 to n (integer) is (n/2)
if n = 3
pairs ->(1,2) , (2,3) , (1,3)
*/