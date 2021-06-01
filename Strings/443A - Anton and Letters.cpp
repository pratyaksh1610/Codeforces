//https://codeforces.com/problemset/problem/443/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool arr[26] = {false};
    int i, count = 0;
    string str, t;
    getline(cin, str); //cin terminates at space so getline is used

    for (i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            arr[str[i] - 'a'] = true;
    }

    for (i = 0; i < 26; i++)
    {
        if (arr[i])
            count++;
    }
    cout << count;

    return 0;
}

/*
used boolean array to count distinct characters 
*/