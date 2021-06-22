//https://codeforces.com/problemset/problem/520/A
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

    string s;
    cin >> s;

    int h[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;

        h[s[i] - 'a']++;
    }

    int flag = 0;

    for (int i = 0; i < 26; i++)
    {
        if (h[i] < 1)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}

/*

taking hash array and counting the occurrences of 
all letters and if any of them less than 1
then break;
print "NO" 

*/