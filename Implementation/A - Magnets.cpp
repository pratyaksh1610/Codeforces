//https://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string t = " ";
    int n, counter = 0;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        if (s.compare(t) != 0)
        {
            t = s;
            counter++;
        }
    }
    cout << counter;

    return 0;
}

/*
?find number of groups of magnets

input each pair as string 
declare empty string say t = " "
then compare and put contents of s to t for comparing next incoming string i.e in s
initialise counter variable and increment it side by side.

*/