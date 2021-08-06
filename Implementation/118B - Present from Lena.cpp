//Problem Link - https://codeforces.com/problemset/problem/118/B
/*By Pratyaksh Khurana*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//fast I/O
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int sp = n, st = 1,p = 0;

	for (int i = 1; i <=  2 * n + 1 ; i++)
	{
		for (int j = 1; j <= sp; j++)
			cout<<"  ";
		

		for (int j = 1; j <= st; j++)
		{
			if(j!=st)
			cout << p <<" ";
			else
			 cout << p ;

			if(j <= st/2)
			 p++;

			else 
			 p--;
		}

		p=0;
		if(i <= n)
		{
         sp--;
		 st+=2;
		}

		else 
		{
			sp++;
			st-=2;
		}
		cout<<endl;
	}

	return 0;
}