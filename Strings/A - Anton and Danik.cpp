//https://codeforces.com/contest/734/problem/A
#include <iostream>
using namespace std;

int main()
{
    int i, n, a = 0, d = 0;
    cin >> n;
    char arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n; i++)
    {
        if (arr[i] == 'A')
            a++;
        else if (arr[i] == 'D')
            d++;
    }

    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}

/*
string given (outcome of each game who won Anton / Danik) 
simple iterative solution
calculate no. of A and D , print accordingly 
brute force
*/