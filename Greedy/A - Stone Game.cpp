//https://codeforces.com/contest/1538/problem/A
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
        int n, ma = INT_MIN, mi = INT_MAX;
        cin >> n;

        int v[n];

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ma = max(ma, v[i]);
            mi = min(mi, v[i]);
        }
        int rimi, rima, lima, limi;

        for (int i = 0; i < n; i++)
        {
            if (ma == v[i])
                lima = i + 1;

            if (mi == v[i])
                limi = i + 1;
        }

        rima = n - lima + 1;
        rimi = n - limi + 1;

        int ans1 = max(lima, limi);
        int ans2 = max(rima, rimi);
        int ans3 = min(lima + rimi, limi + rima);

        cout << min({ans1, ans2, ans3}) << endl;
    }

    return 0;
}

/*
?find min. moves in order to delete max. and min. element from array
> elements in array are distinct
find position of maximum and minimum element (1-based index)
ex. 

...........
.1.4.5.3.2.
...........

> 3 Cases arise :-

1) Moving through left   -->
   min_moves = max(index_of_min , index_of_max);
                   index_left_min,index_left_max
.......................................................

2) Moving through right    <--
   min_moves = max(n - index_of_min + 1 , n - index_of_max + 1 )     
                        ri_index_min           ri_index_max
.......................................................

3) Going through left and right 
-->  _e _l _e _m _e _n_t_s  <---
     deleting min from left and max from right and vice versa  
   
     min_moves = min(ri_index_min +index_of_max , ri_index_max + index_of_min )

calculate minimum of 1) , 2) , 3)

*/