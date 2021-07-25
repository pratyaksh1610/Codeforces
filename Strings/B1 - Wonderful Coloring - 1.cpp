//Problem Link - https://codeforces.com/contest/1551/problem/B1
/*By - Pratyaksh Khurana*/

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
        string s;
        cin >> s;

        int arr[26] = {0};
        for (int i = 0; i < s.size(); i++)
            arr[s[i] - 'a']++;

        int count1 = 0, count2 = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 1)
                count1++;
            else if (arr[i] >= 2)
                count2++;
        }

        int ans = count1 / 2 + count2;
        cout << ans << endl;
    }

    return 0;
}