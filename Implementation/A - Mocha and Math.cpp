
//Problem Link - https://codeforces.com/contest/1559/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    int a[n];

    for( int i = 0; i < n; i++)
      cin>>a[i];
      
    int ans = a[0];
    for (int i = 1; i < n; i++)
      ans =  ans & a[i];
    
    cout<<ans<<endl;

  }

  return 0;
}