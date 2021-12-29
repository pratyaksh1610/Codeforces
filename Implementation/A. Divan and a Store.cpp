//Porblem Link - https://codeforces.com/contest/1614/problem/A
/*By Pratyaksh Khurana*/
 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
  int t;
  cin>>t;
 
  while(t--)
  {
    ll n,l,r,k;
    cin>>n>>l>>r>>k;;
    
    vector<ll> v;
 
    for (int i = 0; i < n; i++)
    {
      int y;
      cin>>y;
      v.push_back(y);
    }
 
    sort(v.begin(),v.end());
    ll c = 0,sum = 0;
    
    for (int i = 0; i < n; i++)
    {
      if(sum > k)
        break;
      if(v[i] >= l && v[i] <= r)
      {
        sum += v[i];
        c++;
      }
      
    }
    if(sum > k)
     c--;
    cout<<c<<endl;
    
  }
 
  return 0;
}