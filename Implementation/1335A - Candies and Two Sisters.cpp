//https://codeforces.com/problemset/problem/1335/A
#include <bits/stdc++.h>
using namespace std;

void answer()
{
    int n;
    cin >> n;

    if (n < 3)
        cout << 0 << endl;
    else
        cout << (n - 1) / 2 << endl;
}

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
        answer();
    }

    return 0;
}

/*
if n < 3 then 0;

(a > b) , (a + b = n)

for n = 4
 3 1

for n = 5
 4 1
 3 2

for n = 6
 5 1
 4 2

so (n-1)/2

*/