//https://codeforces.com/problemset/problem/580/A
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
    int v[n];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int count = 1, ma = -1;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
            ++count;

        else
        {
            ma = max(count, ma);
            count = 1;
        }
    }
    ma = max(count, ma); // Why this line is added ? see test case below

    cout << ma;

    return 0;
}

/*

Test_Case - 1 , 2 , 1, 4, 5, 6, 7 , 4, 5 , 6 , 7 , 8 , 9
In this after iterating through [4 -> 9] if is always
encountered so value of ma is not updated so it is added 
after the loop so as to alter it 

*/