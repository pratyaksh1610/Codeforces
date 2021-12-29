//Problem link - https://codeforces.com/contest/1614/problem/B
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
    ll n;
    cin>>n;
    vector<ll> v;
    vector<pair<ll,ll>> v2;
    vector<ll> q(n);
 
    for (int i = 0; i < n; i++)
    {
      int y;
      cin>>y;
      v.push_back(y);
      v2.push_back({y,i});
    }
 
    ll time = 0;
    sort(v2.rbegin(),v2.rend());
    ll p = 1;
  
    for (int i = 0; i < n; i++)
    {
      q[v2[i].second] = p;
      time  = time + (2 * abs(p) * (v2[i].first));
      if(p > 0)
        p *= -1;
 
      else 
      {
        p*=(-1);
        p++;
      }
      
    }
     cout<<time<<'\n'<<"0 ";
     for (int i = 0; i < q.size(); i++)
       cout<<q[i]<<" ";
     
     cout<<'\n';
  }
 
  return 0;
}
 