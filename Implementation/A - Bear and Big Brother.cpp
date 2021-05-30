//https://codeforces.com/contest/791/problem/A
#include <iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;

    while (1)
    {
        count++;
        a = a * 3;
        b = b * 2;
        if (a > b)
            break;
    }

    cout << count;
    return 0;
}