//Problem Link - https://codeforces.com/contest/1606/problem/A
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
        string s;
        cin>>s;
        int ab = 0,ba = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            if(i + 1 < s.size())
            {
                if(s[i] == 'a' && s[i+1] == 'b')
                 ab++;

                else if(s[i] == 'b' && s[i+1] == 'a')
                 ba++; 
            }
        }


        if(ab > ba)
        {
            for (int i = 0; i <s.size(); i++)
            {
                if(s[i] == 'a')
                {
                 s[i] = 'b';
                 break;
                }
            }
            cout<<s<<endl;
        }

        else if(ba > ab)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i] == 'b')
                {
                 s[i] = 'a';
                 break;
                }
            }
            cout<<s<<endl;
        }
        else 
            cout<<s<<endl;
}
    return 0;
}

/*
Approach to the above problem
? make AB(s) = BA(s);

one approach can be
count number of AB and BA 

then if AB > BA, change first occurrence of A to B
then if BA > AB, change first occurrence of B to A

*/