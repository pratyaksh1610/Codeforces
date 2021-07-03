//https://codeforces.com/problemset/problem/709/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, b, d, count = 0;
    long long sum = 0;
    cin >> n >> b >> d;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] <= b)
            sum += v[i];

        if (sum > d)
        {
            count++;
            sum = 0;
        }
    }
    cout << count;

    return 0;
}