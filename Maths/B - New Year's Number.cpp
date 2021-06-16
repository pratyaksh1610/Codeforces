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
        int n;
        cin >> n;

        int p = n / 2020;
        int q = n % 2020;
        if (p >= q)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

/*
?if 'n' can be expressed as the sum of 2020 and 2021

n = x*2020 + y*2021
x,y can be 0,

ex. 8081
first divide n/2020
we get number of 2020 that can be added,
find remainder i.e n%2020 
if remainder(b) <= n/2020
then we can change b times of 2020 by 2021 then it will be yes,
else no

       4
2020........
..... 8081
    - 8080 
      .....
        1   (remainder = b = 1)
      .....
2020 + 2020 + 2020 + 2020  (a=4) 
and remainder = 1 = b
that is  b <= a
so change any one addend of 2020 to 2021

*/