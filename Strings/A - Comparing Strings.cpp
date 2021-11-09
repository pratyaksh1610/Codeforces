//Problem Link - https://codeforces.com/contest/186/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  string s1,s2;
  cin>>s1>>s2;
  
  //unequal length, straightaway "NO"
  if(s1.size() != s2.size())
   cout<<"NO";
  else 
  {
    //finding two positions if they exist  where they are unequal 
    //from start and end, then comparing them
     
    int f = -1;
    for (int i = 0; i < s1.size(); i++)
    { 
       if(s1[i] != s2[i])
       {
         f = i;
         break;
       }
    }   
    
    int s = -1;
    for (int i = s1.size() - 1; i > 0; i--)
    { 
       if(s1[i] != s2[i])
       {
         s = i;
         break;
       }
    }   
     
    //means at only 1 position they are different 
    if(f == s)
     cout<<"NO";
    else 
    { 
      //swap characters and check for equality
      swap(s1[s],s1[f]);
      if(s1 == s2)
       cout<<"YES";
      else 
       cout<<"NO"; 

    } 

  }   

  return 0;
}