//https://codeforces.com/contest/58/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string s, t = "hello";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[count])
            count++;
    }

    if (count > 4)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
if any string given in form of hello as in like ,
hhhhhheeeellloo
so from the above, characters can be removed , we do not have to remove
the characters , it will be considered as "hello" (greedy)
compare two strings 
*/