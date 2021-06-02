//https://codeforces.com/contest/41/problem/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int i;
    string s, t;
    cin >> s >> t;

    reverse(t.begin(), t.end());

    if (t == s)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
