
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
        long long n;
        cin >> n;

        if (n & (n - 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

/*
if n has odd divisor , then it must be odd prime divisor (x) 
for ex. n = 12 , x = 3(odd-prime)
1) even ∗ even = even;
   even ∗ odd = even;
   odd ∗ even = even;
   odd ∗ odd = odd.

2) n&(n-1)==0 (bitwise operator)
*/