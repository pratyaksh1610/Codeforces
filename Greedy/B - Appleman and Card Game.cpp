//Problem Link - https://codeforces.com/contest/462/problem/B
/*By Pratyaksh Khurana*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
 
  int hsh[26] = {0};
 
  for(int i = 0; i < n; i++)
    hsh[s[i] - 'A']++;
   
   int m = 26;
   sort(hsh,hsh + m,greater<int>());
 
  long long sum = 0;
  for (int i = 0; i < 26; i++)
  {
    if(k > hsh[i])
    {
      sum += (long long)hsh[i]*hsh[i];
      k -= hsh[i]; 
    }
    else 
    {
      sum += (long long)k*k;
      break;
    }
  }
 
  cout<<sum*1LL;
  return 0;
}