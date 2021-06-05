//https://codeforces.com/contest/897/problem/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, i;
    cin >> n >> m;

    string s;
    cin >> s;

    while (m--)
    {
        int l, r;
        char c1, c2;
        cin >> l >> r >> c1 >> c2;

        for (i = l - 1; i < r; i++)
        {
            if (s[i] == c1)
                s[i] = c2;
        }
    }

    cout << s;

    return 0;
}
