//https://codeforces.com/contest/723/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x;
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << (v[1] - v[0]) + (v[2] - v[1]);

    return 0;
}

/*
sort all three coordinates then they must meet 
at the middle point so as to travel the least distance
if input 7 1 4;
then
1 4 7;
print =>  max(a,b,c) - min(a,b,c);
*/