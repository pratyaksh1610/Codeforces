//https://codeforces.com/contest/1547/problem/B
/* By Pratyaksh Khurana */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        bool flag = 1;
        char ch = 96 + n;

        int p = 0, q = n - 1;
        while (ch != 96)
        {

            if (s[p] == ch)
            {
                p++;
                ch--;
            }
            else if (s[q] == ch)
            {
                q--;
                ch--;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}

/*
Two pointer approach 

Example : 

ihfcbadeg
|       |
^       ^
p       q
string of length 'n'
since we need to check whether it is alphabetical or not
we take ;

char ch = 96 + n;

Then checking from p and q we traverse and check the
( 96 + n )th character whether it is equal to ch or not,
in between p++ and q--
if not break , else traverse till (ch == 96)
*/