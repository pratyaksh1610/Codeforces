//Porblem Link - https://codeforces.com/contest/1594/problem/A
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
        ll n;
        cin>>n;
        cout<<(-n + 1)<<" "<<n<<endl;
    }

    return 0;
}

/*

n = 2;
-1 ,0 , 1 , 2
cancels the effect of each other
*/