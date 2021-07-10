//https://codeforces.com/contest/1542/problem/A

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
        int n, even = 0, odd = 0;
        cin >> n;

        for (int i = 0; i < 2 * n; i++)
        {
            int element;
            cin >> element;

            if (element % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*
2*n numbers in input
so number of pairs are n,

?find whether it is possible to generate pairs
with odd sum;
*<< even + odd = odd >>*

if even_numbers = odd_numbers , then it is possible 
else not possible;


even + even  = even 
odd + odd = even
*/