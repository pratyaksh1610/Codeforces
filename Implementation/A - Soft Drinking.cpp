//https://codeforces.com/contest/151/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, l, c, d, p, nl, answer, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    //?find no. of toasts
    int drink_ml, toast_number, limes, salt;

    drink_ml = (k * l);
    toast_number = drink_ml / nl;
    limes = c * d;
    salt = p / np;
    answer = min({toast_number, limes, salt}) / n;
    cout << answer;

    return 0;
}

/*
implementation , given 
*/