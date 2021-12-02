

//Problem Link - https://codeforces.com/contest/1559/problem/B
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
    int n;
    cin>>n;
    string s,t;
    cin>>s;
    
    t = s;
    
    if(s[0] == '?')
    {
      s[0] = 'R';
      t[0] = 'B';
    }

    for (int i = 1; i < s.size(); i++)
    {
      if(s[i] == '?')
      {
        if(s[i-1] == 'R')
          s[i] = 'B';
        
        else 
          s[i] = 'R';
      }
    }
    
    for (int i = 1; i < t.size(); i++)
    {
      if(t[i] == '?')
      {
        if(t[i-1] == 'R')
          t[i] = 'B';
        
        else 
          t[i] = 'R';
        
      }
    }
  
    int cnt = 0,cntt = 0;
    for(int i = 1; i < s.size(); i++)
    {
      if(s[i] == s[i-1])
       cnt++;
      
      if(t[i] == t[i-1])
       cntt++;

    }
    
    if(cnt > cntt) 
     cout<<t<<'\n';
    else 
     cout<<s<<'\n';

  }

  return 0;
}

/*

****************Greedy problem***********

if(s[0] == '?)
 s[0] can be 'R' / 'B'
  then traverse and change all '?' accordingly 
  whether previous one is 'R' / 'B'

if not then 
then traverse and change all '?' accordingly 
  whether previous one is 'R' / 'B'

Generates two cases
*/