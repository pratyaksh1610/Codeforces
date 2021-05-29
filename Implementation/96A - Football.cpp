//https://codeforces.com/contest/96/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, op = 0, count = 1;
    string s;
    getline(cin, s);

    for (i = 0; i < s.length(); i++)
    {
        for (j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
                count++;

            else
                break;
        }
        if (count >= 7)
        {
            op = 1;
            break;
        }
        count = 1;
    }

    cout << (op == 1 ? "YES" : "NO");

    return 0;
}

/*
?calculate consecutive 7 in a string , and report accordingly
*/