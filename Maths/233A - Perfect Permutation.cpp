
//Problem Link - https://codeforces.com/problemset/problem/233/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int n;
  cin>>n;
  
  if(n % 2 != 0)
    cout<<-1;
  else 
  {
    vector<int> v;
    for (int i = 0; i < n; i++)
     v.push_back(i+1);

    for (int i = 0; i < n; i+=2)
      swap(v[i],v[i+1]);

    for (int i = 0; i < n; i++)
       cout<<v[i]<<" ";

  }  

  return 0;
}


/*
> inverse of array

-> if n is odd , inverse does not exist as we cant swap the last element 
  and it will be at its place only i.e (Pi = i);

-> if n is even swap the elements 
*/