//https://codeforces.com/contest/118/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s, t;
    cin >> s;

    for (i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'u' || c == 'o' || c == 'i' || c == 'Y' || c == 'y')
            continue;

        t += '.';
        t += c;
    }
    cout << t;
    return 0;
}
