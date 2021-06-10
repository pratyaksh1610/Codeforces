//https://codeforces.com/contest/59/problem/A
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int i, u = 0, x = 0;
    char s[100];
    cin >> s;

    for (i = 0; s[i]; i++)
    {
        if (islower(s[i]))
            x++;
        else if (isupper(s[i]))
            u++;
    }

    if (x == u)
    {

        for (i = 0; s[i]; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    else if (u > x)
    {

        for (i = 0; s[i]; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (i = 0; s[i]; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}

/*
?implementation of strings
lower -> upper
upper -> lower, based on no. of upper and lower case characters

*/