//https://codeforces.com/contest/281/problem/A
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int i;
    char a[1000];
    cin >> a;
    for (i = 0; i < 1; i++)
    {
        if (islower(a[i]))
            a[i] = toupper(a[i]);
        else
            break;
    }

    for (i = 0; a[i]; i++)
        cout << a[i];
    return 0;
}

/*
 ?word capitalisation 
 'a' - 'A' = 32
*/