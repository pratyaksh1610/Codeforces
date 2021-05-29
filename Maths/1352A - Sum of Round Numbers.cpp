//https://codeforces.com/contest/1352/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x = 0, summands = 0;
        cin >> n;
        int num = n;

        while (n > 0)
        {
            int last_digit = n % 10;
            if (last_digit != 0)
                summands++;
            n = n / 10;
        }

        cout << summands << "\n";
        while (num > 0)
        {
            int last_digit = num % 10;

            if (last_digit != 0)
            {
                int r = last_digit * int(pow(10, x) + 0.5);
                cout << r << " ";
            }
            x++;
            num = num / 10;
        }

        cout << "\n";
    }

    return 0;
}

/*
implementation math
*/