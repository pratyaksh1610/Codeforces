//Problem Link - https://codeforces.com/problemset/problem/1543/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll t;
    cin>>t;

    while(t--)
    {
       ll n,sum = 0;
       cin>>n;

       ll arr[n];

       for (ll i = 0; i < n; i++)
       {
           cin>>arr[i];
           sum += arr[i];
       }
    
       ll mean = sum / n;
    
       ll x = mean * n;
       
       ll res = n - (sum-x);
       cout<<res * (sum-x)<<endl;
    }

    return 0;
}

/*
In the optimal arrangement, the number of cars will be distributed as evenly as possible.

finding the mean / avg. , distribute evenly that mean , then 
describe a forumla :)

O(n)

*/