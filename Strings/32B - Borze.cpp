//https://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string radius, t = "";
    cin >> radius;

    for (int i = 0; i < radius.size(); i++)
    {
        if (radius[i] == '.')
            t = t + '0';

        else if (radius[i] == '-' && radius[i + 1] == '.')
        {
            t = t + '1';
            i += 1;
        }
        else if (radius[i] == '-' && radius[i + 1] == '-')
        {
            t = t + '2';
            i += 1;
        }
    }

    cout << t;

    return 0;
}
