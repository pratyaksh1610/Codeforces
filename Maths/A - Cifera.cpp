//Problem Link - https://codeforces.com/problemset/problem/114/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long k,l,temp = 1,count = 0;
    cin >> k >> l;
    
    for (int i = 1; i <= l ; i++)
    {
        temp = temp * k;
        count++;
        if(temp >= l)
         break;
    }

    if(temp == l)
    {
        cout<<"YES"<<endl;
        cout<<count-1;
    }

    else 
     cout<<"NO";

    return 0;
}