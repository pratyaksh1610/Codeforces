//https://codeforces.com/contest/1450/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        sort(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}

/*
The string "trygub" is not sorted alphabetically, and a subsequence of a sorted string is necessarily sorted.
 So, if we sort the input string, it will be a solution. Complexity is O(n) with counting sort.

A string b is a subsequence of a string a if b can be obtained from a by deletion of several (possibly, zero or all) characters. 
For example, 
"xy" is a subsequence of "xzyw" and "xy", but not "yx".

*/