
//Problem Link - https://codeforces.com/contest/1605/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int t;
  cin>>t;

  while(t--)
  {
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    cout<< (((a1+a3-(2*a2)) % 3) == 0 ? 0 : 1)<<endl;
  }

  return 0;
}

/*
changing in a1 and a3 will not produce the
desired result
and changing a1 and a2 / a3 ans a2 will
increase / decrease value by multiple of 3

O(1)
*/