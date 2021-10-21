//https://codeforces.com/contest/231/problem/A
#include <iostream>
using namespace std;

int main()
{
    int n, p, v, t, a = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p >> v >> t;
        if ((p + v + t) >= 2)
            a++;
        else
            continue;
    }
    cout << a;
    return 0;
}

/*
input whether they are sure or not, then if >=2
then print number of problems in which they are sure
about the solution
*/