//Problem Link - https://codeforces.com/contest/56/problem/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    
    int idx = -1,element;
    for (int i = 0; i < n; i++)
    {
        if(v[i] != i+1)
        {
            idx = i+1;
            element = v[i];
            break;
        }
    }
   
   if(idx == -1)
    cout<<0<<" "<<0<<endl;
    
   else 
   { 
       int id = idx, e = element;
       vector<int> v1;
       
       idx = idx - 1;
       element = element - 1;
       while(idx < element)
       {
           swap(v[idx],v[element]);
           idx++;
           element--;
       }

       for (int i = 0; i < n; i++)
       {
           if(v[i] != i+1)
            {
                cout<<0<<" "<<0<<endl;
                return 0;
            }
       }
       cout<<id<<" "<<e<<endl;
   } 

    return 0;
}