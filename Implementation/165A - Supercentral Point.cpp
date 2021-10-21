
//Problem Link - https://codeforces.com/problemset/problem/165/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int n;
  cin>>n;
  
  vector<pair<int,int>> v;
  for (int i = 0; i < n; i++)
  {
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
  }
  
  int lo = 0,up = 0,ri = 0,le = 0,count = 0;
  for (int i = 0; i < n; i++)
  {
    lo = 0,up = 0,ri = 0,le = 0;
    for (int j = 0; j < n; j++)
    {
      if(v[i].first < v[j].first && v[i].second == v[j].second)
       ri++;
      else if(v[i].first > v[j].first && v[i].second == v[j].second)
       le++;
      
      else if(v[i].first == v[j].first && v[i].second > v[j].second)
       lo++;
      
      else if(v[i].first == v[j].first && v[i].second < v[j].second)
       up++;      
    }

    if(ri >= 1 && le >= 1 && lo >= 1 && up >= 1 )
     count++;
  }

  cout<<count;  

  return 0;
}

















