//https://codeforces.com/contest/112/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string a, b;
    cin >> a >> b;

    for (i = 0; i < a.size(); i++)
    {
        if (isupper(a[i]))
            a[i] = tolower(a[i]);

        if (isupper(b[i]))
            b[i] = tolower(b[i]);
    }

    for (i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] > b[i])
            {
                cout << 1;
                exit(0);
            }
            else if (a[i] < b[i])
            {
                cout << -1;
                exit(0);
            }
        }
    }
    cout << 0;
    return 0;
}