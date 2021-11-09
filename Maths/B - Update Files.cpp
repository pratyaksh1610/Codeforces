//Problem Link - 
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k,comp = 1,count = 0;
        cin>>n>>k;

        while(comp < k)
        {
            comp *= 2;
            count++;
        }

        if(comp < n)
           count += (n - comp + k - 1)/k;
        
        cout<<count<<'\n';
    }

    return 0;
}

/*
! till ( comp < k )
> comp will get doubled 
> after that remaining will add up by k only


*/