
//Problem Link - https://codeforces.com/contest/242/problem/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n,x,y;
  cin>>n;
  vector<pair<int,int>> v;

  for (int i = 0; i < n; i++)
  {
    cin>>x>>y;
    v.push_back(make_pair(x,y));
  }
  
int p = v[0].first, q = v[0].second;

int pos = 0;
//initially pos = 0 as we are comparing, starting from first

for (int i = 1; i < n; i++)
{
  if(v[i].first <= p && v[i].second>=q)
  {
    p = v[i].first;
    q = v[i].second;
    pos = i;
  }
}

bool f = 1;
for (int i = 0; i < n; i++)
{
  if(p <= v[i].first && q >= v[i].second )
     f = 1;
   
   else 
    {
      f = 0;
      break;
    }
}

if(f == 0)
 cout<<-1;
else 
 cout<<pos+1;

  return 0;
}