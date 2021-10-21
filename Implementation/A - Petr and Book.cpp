//Problem Link - https://codeforces.com/contest/139/problem/A
/*By Pratyaksh Khurana*/

#include<iostream>
using namespace std;
int a[7];
int main()
{
    int i, n;
    cin>>n;
    for (i=0; i<7; i++)
        cin>>a[i];
    while (n>0)
        {
            i=0;
            while (n>0 && i<7)
                {
                    n-=a[i];
                    i++;
                }
        }
    cout<<i;
    return 0;
}