//https://codeforces.com/problemset/problem/469/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n; //no. of levels

    int x, y, i;
    cin >> x; //no. of levels X passed
    vector<int> vx;
    for (i = 0; i < x; i++)
    {
        int num;
        cin >> num;
        vx.push_back(num);
    }

    cin >> y; //no. of levels Y passed
    vector<int> vy;
    for (i = 0; i < y; i++)
    {
        int num;
        cin >> num;
        vy.push_back(num);
    }

    set<int> s;
    //union of sets  (inserting elements of vector from begin -> end in the req. set)
    set_union(vx.begin(), vx.end(),
              vy.begin(), vy.end(),
              inserter(s, s.begin())); //insertor > (the set in which we insert elements of vector)

    if (s.size() == n) //since having distinct elements , check whether it is equal to n or not
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}