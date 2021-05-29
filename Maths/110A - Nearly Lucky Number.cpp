//https://codeforces.com/contest/110/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, count = 0, dig = 0, x = 0;
    cin >> n;

    while (n > 0)
    {
        int ls = n % 10;

        if (ls == 4 || ls == 7)
            count++;

        n = n / 10;
    }

    while (count > 0)
    {
        int ls = count % 10;
        dig++;

        if (ls == 4 || ls == 7)
            x++;

        count = count / 10;
    }

    if (x == dig && dig >= 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
calculate no. of lucky digits in n using count variable
then if digits in count variable = no. of lucky digits 
yes,
else 
no
*/