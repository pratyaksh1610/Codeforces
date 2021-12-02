//Problem Link - https://codeforces.com/contest/1538/problem/B
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
 
    ll n;
    cin>>n;
    
    ll arr[n],sum = 0;

    for (ll i = 0; i < n; i++)
    {
      cin>>arr[i];
      sum += arr[i];
    }
     
    if(sum % n != 0)
      cout<<-1<<endl;
    else 
    {
        ll mean = sum / n,count = 0;
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] > mean)
                count++;
        }
        cout<<count <<endl;

    }  
 }   
    return 0;
}

/*
> find mean

example 

n = 5
array is;

10 8 5 3 4 

sum = 30
mean = 30 / 5 => 6

10   8    5    3    4
+4   +2   -1   -3   -2

want to make all elements of array equal so if mean has decimal part
return -1;

else 
find minimum k , i.e 
if element > mean count that

*/