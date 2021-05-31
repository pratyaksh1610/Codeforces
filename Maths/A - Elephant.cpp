//https://codeforces.com/contest/617/problem/A
#include <iostream>
using namespace std;

int main()
{
    int x, steps = 0;
    cin >> x;

    int val = (x / 5);
    if (x % 5 >= 1 && x % 5 <= 5)
        steps++;

    cout << val + steps;

    return 0;
}

/*brute_force*/