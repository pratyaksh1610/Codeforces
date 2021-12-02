//Problem Link - https://codeforces.com/problemset/problem/1610/B
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
        int n;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++)
          cin>>arr[i];
        
        int i = 0,j = n-1;
        
        pair<int,int> p;
        while(i <= j)
        {
            if(arr[i] != arr[j])
            {
                p.first = arr[i];
                p.second = arr[j];
                break;
            }
            i++;
            j--;
        }

        vector<int> vi,vj;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] != p.first)
             vi.push_back(arr[i]);
            
            if(arr[i] != p.second)
             vj.push_back(arr[i]);
        }
         
        bool  flag = 1,flag_2 = 1;
        for (int i = 0; i < vi.size(); i++)
        {
            if(vi[i] != vi[vi.size()-1-i])
            {
                flag = 0;
                break;
            }
        }
        
        for (int i = 0; i < vj.size(); i++)
        {
            if(vj[i] != vj[vj.size()-1-i])
            {
                flag_2 = 0;
                break;
            }
        }
    
        if(flag || flag_2)
         cout<<"YES\n";
        else 
         cout<<"NO\n";

    }

    return 0;
}