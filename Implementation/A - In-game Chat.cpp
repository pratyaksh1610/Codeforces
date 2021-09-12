//Problem Link - https://codeforces.com/contest/1411/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int t;
  cin>>t;

  while(t--)
  {
    int n,count = 0;
    cin>>n;
    string s;
    cin>>s;

    for (int i = s.size()-1; i >= 0; i--)
    {
      if(s[i] == ')')
       count++;

      else 
       break; 
    }

    if(count <= s.size() - count)
     cout<<"No\n";
    else 
     cout<<"Yes\n"; 

  }

  return 0;
}