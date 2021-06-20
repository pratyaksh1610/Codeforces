//https://codeforces.com/problemset/problem/749/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << "2 ";
        }
    }

    else
    {
        cout << (n - 3) / 2 + 1 << endl;
        cout << "3 ";
        for (int i = 0; i < (n - 3) / 2; i++)
        {
            cout << "2 ";
        }
    }

    return 0;
}

/*

if n is even 
output (n/2) 2's

if n is odd 
output 3 and ( (n-3)/2 ) 2's

*/