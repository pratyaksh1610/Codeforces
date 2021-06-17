//https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, count = 0;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    for (int i = 1; i < v.size(); i++)
    {
        int maxx = *max_element(v.begin(), v.begin() + i);
        int minn = *min_element(v.begin(), v.begin() + i);
        if (v[i] > maxx || v[i] < minn)
            ++count;
    }
    cout << count;

    return 0;
}
/*
Array / Vector index start from 0 to (size - 1)
*/