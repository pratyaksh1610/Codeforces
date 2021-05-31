//https://codeforces.com/contest/271/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    int p = n + 1;

    while (1)
    {
        string s = to_string(p);

        set<int> uniDigits(s.begin(), s.end());

        if (uniDigits.size() == s.size())
        {
            i = stoi(s);
            break;
        }

        p += 1;
    }

    cout << i;
    return 0;
}

/*
?year having all digits distinct 
use of set (STL)
adding characters of string to set , so it contains only distinct characters
if this is equal to size of string , as it has only distinct characters
else increase number by 1
*/