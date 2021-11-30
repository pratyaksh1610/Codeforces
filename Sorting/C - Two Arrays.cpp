
//Problem Link - https://codeforces.com/contest/1589/problem/C
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isSorted(int *a,int *b,int n)
{
  for (int i = 0; i < n; i++)
    if(a[i] != b[i])
     return 0;
  return 1;
}

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  ll t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    int a[n],b[n];

    for (int i = 0; i < n; i++)
      cin>>a[i];
    
    for (int i = 0; i < n; i++)
      cin>>b[i];

    sort(a,a + n);
    sort(b,b + n);

    if(isSorted(a,b,n))
      cout<<"YES\n";
    else 
    {
      int k = 0;
      for (int i = 0; i < n; i++)
      {
        if(b[i] - a[i] != 0 )
        {
          if(b[i] - a[i] > 1 || b[i] - a[i] < 1)
          {
            k = -1;
            break;
          }
        }
      }
      if(k == -1)
       cout<<"NO\n";
      else 
       cout<<"YES\n"; 
    }  

  }

  return 0;
}