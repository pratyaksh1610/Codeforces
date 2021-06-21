//https://codeforces.com/contest/1537/problem/A
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
        long long sum = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long g;
            cin >> g;
            sum += g;
        }
        if (sum == n) //no element to be added
            cout << 0 << endl;

        else if (sum > n)
            cout << sum - n << endl;

        else if (sum < n)
            cout << 1 << endl;
    }

    return 0;
}

/*
We need to make arithmetic_mean(AM) to be 1
so we need sum_of_elements = n ;
*/
