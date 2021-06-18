//https://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < m; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    long long time = 0;

    if (v[0] != 1)
        time += v[0] - 1;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
            time += (n - v[i - 1] + v[i]);

        else if (v[i] >= v[i - 1])
            time += (v[i] - v[i - 1]);
    }

    cout << time;

    return 0;
}

/*
traverse in clockwise direction 
*/