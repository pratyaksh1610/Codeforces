//https://codeforces.com/contest/467/problem/A
#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;

    while (n--)
    {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2)
            ++a;
    }
    cout << a << endl;

    return 0;
}
