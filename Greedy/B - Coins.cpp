//Problem Link -  https://codeforces.com/contest/58/problem/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    cout<<n<<" ";

    for (int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            n /= i;
            cout<<n<<" ";
        }
    }
    return 0;
}

/*print factors of n in the form of denomination*/