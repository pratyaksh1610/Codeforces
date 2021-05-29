//https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            count++;
    }
    if (count > 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
****************************************************
?Determine the output to be produced after execution
****************************************************
*/