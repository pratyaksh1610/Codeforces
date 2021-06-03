//https://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>
using namespace std;

int count(int s1, int s2, int s3, int s4)
{
    set<int> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);

    int setSize = s.size();
    return setSize;
}

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int res = count(s1, s2, s3, s4);
    cout << (4 - res);
    return 0;
}
