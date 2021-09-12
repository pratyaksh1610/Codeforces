

//Problem Link - https://codeforces.com/contest/66/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
   long double n;
   cin>>n;
   if(n<=127)
    cout<<"byte";

   else if(n<=32767) 
    cout<<"short";

   else if(n<=2147483647) 
    cout<<"int";
 
   else if(n<=9223372036854775807) 
    cout<<"long";
   else cout<<"BigInteger";

 return 0;
}