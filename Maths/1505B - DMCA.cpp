//https://codeforces.com/problemset/problem/1505/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    while (a >= 10)
    {
        int sum = 0;
        while (a > 0)
        {
            int ls = a % 10;
            sum += ls;
            a /= 10;
        }
        a = sum;
    }
    cout << a;

    return 0;
}

/*
digital root of a number 'n'

347 = 3 + 4 + 7 => 14
14 = 5 , so 5 is the digital root 
till we obtain a single digit ,
add the digits

*/