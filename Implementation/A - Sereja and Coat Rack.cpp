//Problem Link - https://codeforces.com/contest/368/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n, d, m,sum = 0;
    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    sort(arr,arr + n);
    
    cin>>m;
    
    if(m <= n)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += arr[i];
        cout<<sum;
    }

    else 
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
          sum += arr[i];

         n -= m;
         cout<<sum + (n*d); 

    }
    

    return 0;
}