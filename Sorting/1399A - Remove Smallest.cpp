//https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                break;

            if (abs(a[i] - a[i + 1]) <= 1 &&
                a[i] != -1 && a[i + 1] != -1)
            {
                if (a[i] == a[i + 1])
                    a[i] = -1;

                else if (a[i] > a[i + 1])
                    a[i + 1] = -1;

                else if (a[i] < a[i + 1])
                    a[i] = -1;
            }
        }

        // for (int i = 0; i < n; i++)
        //     cout << a[i] << " ";
        // cout << endl;

        int count = 0;

        for (int i = 0; i < n; i++)
            if (a[i] != -1)
                count++;

        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*
Hashing technique after sorting
then calculating values other than -1;
*/