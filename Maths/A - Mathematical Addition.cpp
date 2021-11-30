//Problem Link - https://codeforces.com/contest/1589/problem/A
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
    ll u,v;
    cin>>u>>v;
    cout<<(u * u * -1)<<" "<<(v * v)<<endl;
  }

  return 0;
}