//https://codeforces.com/contest/677/problem/A
#include <iostream>
using namespace std;

int width(int a[], int n, int h)
{
    int s = 0, p = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= h)
            s++;
        else if (a[i] > h)
            p += 2;
    }
    return s + p;
}

int main()
{
    int n, h, i;
    cin >> n >> h;
    int a[n], total;

    for (i = 0; i < n; i++)
        cin >> a[i];

    total = width(a, n, h);
    cout << total << "\n";

    return 0;
}
