//https://codeforces.com/contest/479/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    int ans1 = a + (b * c);
    int ans2 = a * (b + c);
    int ans3 = a * b * c;
    int ans4 = (a + b) * c;
    int ans5 = a + b + c;

    cout << max({ans1, ans2, ans3, ans4, ans5});

    return 0;
}