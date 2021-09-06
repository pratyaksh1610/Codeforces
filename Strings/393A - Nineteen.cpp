//Problem Link - https://codeforces.com/problemset/problem/393/A
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//fast I/O
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin>>s;

	int n=0,e=0,i=0,t=0;

	for ( int j = 0; j < s.size(); j++)
	{
		if(s[j]=='n')
		 n++;
		else if(s[j]=='e')
		 e++;
		else if(s[j]=='i')
		 i++;
		else if(s[j]=='t')
		 t++;
	}

	cout<<min({(n-1)/2 , e/3 , i,t});
	return 0;
}