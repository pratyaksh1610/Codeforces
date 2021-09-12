//Problem link  - https://codeforces.com/contest/59/problem/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,sum = 0;
    cin>>n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        sum += y;
        v.push_back(y);
    }

    sort(v.begin(),v.end());
    int odd = -1;
    for (int i = 0; i < n; i++)
    {
        if(v[i] % 2 != 0) 
         {
             odd = v[i];
             break;
         }
    }

    if(sum % 2 == 0 && odd != -1)
     cout<<sum-odd;
    else if(sum % 2 != 0)
     cout<<sum;
    else 
     cout<<0; 

    return 0;
}