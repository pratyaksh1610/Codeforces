//Problem Link - https://codeforces.com/contest/1248/problem/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  lli n;
  cin>>n;
  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    int y;
    cin>>y;
    v.push_back(y);
  }

  sort(v.begin(),v.end(),greater<int>());
  
  lli X = 0,Y = 0;

  if(n % 2 == 0)
  {
    for (int i = 0; i < n; i++)
    {
      if(i < n/2)
       X += v[i];

      else 
       Y += v[i]; 
    }    
  }
  else 
  {
    for (int i = 0; i < n; i++)
    {
      if(i <= n/2)
       X += v[i];

      else 
       Y += v[i]; 
    }    
  }
  
  cout<<X*X + Y*Y;
  
  return 0;
}


/*
We need to maximise either int vertical or horizontal direction
> sort the array 

> if size is even , split array into 2 parts
  add corresponding numbers

> if even keep a check,

*/

























