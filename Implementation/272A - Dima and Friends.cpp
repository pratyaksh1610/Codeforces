//Problem Link - https://codeforces.com/problemset/problem/272/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, c = 0 ;
  cin>>n;
  int a[n], sum = 0;


  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    sum += a[i];
  }
  
  int  m = n+1;
  bool arr[sum+5]={0};

  for (int i = 0; i < sum+5; i += m)
     arr[i] = 1;

  for (int i = sum; i < sum+5; i++)
    if(arr[i] == 0)
      c++;
 
  cout<<c;
  
  return 0;
}












