//https://codeforces.com/contest/500/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            v.push_back(0);
        int element;
        cin >> element;
        v.push_back(element);
    }

    int i = 1, x = 1;
    while (x <= t)
    {
        x = i + v[i];
        if (x >= t)
            break;
        i = x;
    }

    if (x == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
?Is it possible to reach T th cell;

Initially we are at cell 1
so in order to achieve this put 0 on 0th index
and start inserting elements from 1st index

so incrementing value of x and simultaneously 
traversing i to value of x to check whether it is 
possble or not


*/