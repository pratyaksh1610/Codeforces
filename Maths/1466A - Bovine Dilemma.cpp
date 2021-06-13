//https://codeforces.com/problemset/problem/1466/A
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
        int n;
        cin >> n;
        vector<int> v;
        vector<float> v1;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                v1.push_back(0.5 * (v[j] - v[i]));
            }
        }

        set<float> s(v1.begin(), v1.end());
        int ans = s.size();
        cout << ans << endl;
    }

    return 0;
}
/*
distinct triangles that can be formed 
*/