//https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    bool v[100] = {false};

    int count = 0;

    for (int i = 0; i < s.size(); i++)
        v[s[i] - 'a'] = true;

    for (int i = 0; i < 100; i++)
    {
        if (v[i] == true)
            count++;
    }

    if (count % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}

/*
?find no. of distinct characters ,
take boolean array and initialise all its elements as false
iterate over string and place true over that index and count true 
ex. wjmzbmr
so no. of distinct characters are - 6 i.e w , j , m , z , b , r
*/
