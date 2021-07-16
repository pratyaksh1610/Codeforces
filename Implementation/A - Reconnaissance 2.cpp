//Problem Link - https://codeforces.com/contest/34/problem/A
/*By Pratyaksh Khurana*/

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
    int a[n];
    vector<int> h;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
        h.push_back(abs(a[i] - a[i - 1]));

    h.push_back(abs(a[0] - a[n - 1]));

    int minn = min_element(h.begin(), h.end()) - h.begin();

    if (minn == n - 1)
        cout << minn + 1 << " " << 1;
    else
        cout << minn + 1 << " " << minn + 2;

    return 0;
}
