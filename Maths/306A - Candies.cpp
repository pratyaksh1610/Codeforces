//https://codeforces.com/problemset/problem/306/A
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

    while (m >= 1)
    {
        int p = n / m;
        cout << p << " ";
        n -= p;
        m -= 1;
    }

    return 0;
}

/*
  n                             m  
"Divide"                      "Among"
   18                            7
   16                            6
   14                            5
   12                            4
   9                             3
   6                             2
   3                             1
  
  dividing n/m then decreasing m by 1 and decreasing
  n by number of candies already given


*/