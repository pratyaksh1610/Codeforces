//https://codeforces.com/problemset/problem/702/A
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
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 1, ans = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            count++;
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    cout << ans;

    return 0;
}

/*
find maximum increasing subarray 
*/