
//Problem Link - https://codeforces.com/contest/1605/problem/B
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
    int n,count = 0;
    cin>>n;

    vector<int> v;

    string s;
    cin>>s;
    
    string t = s;
    sort(t.begin(),t.end());
    if(s == t)
    {
      cout<<0<<'\n';
      continue;
    } 

    for (int i = 0; i < s.size(); i++)
    {
      if(s[i] != t[i])
        v.push_back(i+1);
    }

    cout<<1<<'\n';
    cout<<v.size()<<" ";
    for (int i = 0; i < v.size(); i++)
      cout<<v[i]<<" ";
    
    cout<<'\n';

  }
  return 0;
}