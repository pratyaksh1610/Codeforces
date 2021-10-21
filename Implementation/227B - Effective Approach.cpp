
//Problem Link - https://codeforces.com/problemset/problem/227/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

const int M = 1e5 + 10;
int comp[M];

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int n,id = 0;
  cin>>n;
  int arr[n];

  for (int i = 0; i < n; i++)
   cin>>arr[i];
  
  //for storing comparisons of each element
  
  for (int i = 0; i < n; i++)
    comp[arr[i]] = i+1;


  int m;
  long long int petya = 0,vasya = 0;
  cin>>m;

  while(m--)
  {
    //queries
    int q;
    cin>>q;

    petya += comp[q] ;
    vasya +=( n - comp[q] + 1) ;

  }  
  cout<<petya<<" "<<vasya;  
  return 0;
}