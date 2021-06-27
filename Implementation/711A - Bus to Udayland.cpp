//https://codeforces.com/problemset/problem/711/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char arr[n][5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == 'O' && arr[i][1] == 'O')
        {
            arr[i][0] = '+';
            arr[i][1] = '+';
            flag = 1;
            break;
        }
        else if (arr[i][3] == 'O' && arr[i][4] == 'O')
        {
            arr[i][3] = '+';
            arr[i][4] = '+';
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
                cout << arr[i][j];
            cout << endl;
        }
    }
    else
        cout << "NO";

    return 0;
}