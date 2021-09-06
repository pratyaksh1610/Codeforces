//Problem Link - https://codeforces.com/contest/56/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,t = 0;
    cin>>n;
    
    while(n--)
    {
        string s;
        cin>>s;

        if(s == "ABSINTH")
            t++;
        else if(s == "BEER")
            t++;
             
        else if(s == "BRANDY")
            t++;
            
        else if(s == "CHAMPAGNE")
            t++;
              
        else  if(s == "GIN")
            t++;
             
        else if(s == "RUM")
            t++;
            
        else if(s == "SAKE")
            t++;
              
        else if(s == "TEQUILA")
            t++;
             
        else if(s == "VODKA")
            t++;
              
        else if(s == "WHISKEY")
            t++;
             
        else if(s == "WINE")
            t++;
        else 
        {
            int r = 0;
           for (int i = 0; i < s.size(); i++)
           {
               if(isdigit(s[i]))
                r++;
           }
           if(r == s.size())
           {
               int num = stoi(s);
               if(num >=0 && num<18)
                t++;
           }       
        }    
    }
    cout<<t;
    return 0;
}