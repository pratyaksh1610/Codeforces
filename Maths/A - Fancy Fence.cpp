
//https://codeforces.com/contest/270/problem/A
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

    while(t--)
    {
        int a;
        cin >> a;
        
        int res = 180 - a;

        if(360 % res == 0)
         cout<<"YES"<<endl;
        
        else 
         cout<<"NO"<<endl; 
    }
    return 0;
}

/*
?Tell whether the angle 'a' is of a regular
polygon or not.

**Geometry**

*/