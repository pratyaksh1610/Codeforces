//https://codeforces.com/problemset/problem/472/A

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
        cout << 4 << " " << n - 4;
    else
        cout << 9 << " " << n - 9;

    return 0;
}

/*
if  n < 11;
then only 8 and 10 can be represented as sum of
composite numbers.

8 = 6 + 2;
10 = 6 + 4;

if n >= 12
then if,
n is even then 4 + (n - 4)
n is odd then 9 + (n - 9)

*/