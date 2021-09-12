//Problem Link - https://codeforces.com/problemset/problem/1539/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;
 

  int arr[n]={0};
  arr[0] = s[0]-'a';
  
  for (int i = 1; i < s.size(); i++)
    arr[i] = arr[i-1] + (s[i]-'a');
  
  while(q--)
  {
    int l,r;
    cin>>l>>r;
    int res = (r - l) + 1;
    l--;
    r--;
    if(l != 0)
      cout<<res + (arr[r] - arr[l-1]) <<endl;
    else 
      cout<<res + arr[r] <<endl;
    
  }
  return 0;
}


/*
Pre-computation technique
*/