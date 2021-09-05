//Problem Link - https://codeforces.com/contest/1567/problem/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s,t = "";
        cin>>s;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'U')
             t = t + 'D';
            else if(s[i] == 'D')
             t = t + 'U';
            else if(s[i] == 'L')
             t = t + 'L';
             else if(s[i] == 'R')
             t = t + 'R';
        }

        cout<<t<<endl;

    }

    return 0;
}