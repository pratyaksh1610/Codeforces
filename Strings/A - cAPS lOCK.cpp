//https://codeforces.com/contest/131/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int i, count = 0;
    cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count++;
        }
    }
    if (count == s.size() - 1)
    {
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                s[i] = s[i] + 32;
            else if (s[i] >= 97 && s[i] <= 122)
                s[i] = s[i] - 32;
        }
    }

    cout << s << endl;

    return 0;
}