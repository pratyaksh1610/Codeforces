// Author : Pratyaksh Khurana
//Problem Link - https://codeforces.com/contest/1166/problem/B
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
 
#define fastio()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD        1000000007
#define INF        1e18
#define PI         3.14159
#define pb         push_back
#define ppb        pop_back
#define mp         make_pair
#define all(x)     (x).begin(), (x).end()
#define ff         first
#define ss         second
#define vll        vector<ll> 
#define endl       "\n"
  
typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 
void _print(ll t)          {cerr << t;}
void _print(int t)         {cerr << t;}
void _print(string t)      {cerr << t;}
void _print(char t)        {cerr << t;}
void _print(ld t)          {cerr << t;}
void _print(double t)      {cerr << t;}
void _print(ull t)         {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

vll sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll count_odd_in_a_range(ll L, ll R){ll N = (R - L) / 2;if (R % 2 != 0 || L % 2 != 0)N += 1;return N;}
ll N(ll i){return i * (i + 1) / 2;}
ll pow(long long a, long long b) {long long res = 1;while (b > 0){if (b & 1)res = res * a;a = a * a;b >>= 1;}return res;} //O(logN)
/*******************************************************************************************************************************************************************************************************/

void pratyaksh_khurana(){
	ll k; cin>>k;
	ll x = -1,y = -1;
	bool flag = 0;
	for(int i = 2;i*i <= k;++i){
		if(k % i == 0){
			x = i;
			y = k/i;
			if(x >= 5 && y >= 5){
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0){
		cout<<"-1\n";
	}else{
		debug(x)
		debug(y)
		char arr[x][y];
		for(int i = 0;i < x;++i){
			for(int j = 0;j < y;++j){
				arr[i][j] = '+';
			}
		}

		int p[5][5] = {'a','e','i','o','u',
		               'e','i','o','u','a',
					   'i','o','u','a','e',
					   'o','u','a','e','i',
					   'u','a','e','i','o'};

		for(int i = 0;i < 5;++i){
			for(int j = 0;j < 5;++j){
				arr[i][j] = p[i][j];
			}
		}
		ll j = 0,a = 0,b = 0;
		for(int i = 5;i < x;++i){
			if(a == 4 && b == 4){
				a = 0,b = 0;
			}
			for(int j = 0;j < y;++j){
				arr[i][j] = p[a][b];
				++b;
			}
			a++;
			b = 0;
		}

		a = 0,b = 0;

		for(int j = 5;j < y;++j){
			if(a = 4 && b == 4){
				a = 0,b = 0;
			}
			for(int i = 0;i < x;++i){
				arr[i][j] = p[a][b];
				++a;
			}
			++b;
			a=0;
		}
	

		for(int i = 0;i < x;++i){
			for(int j = 0;j < y;++j){
				if(arr[i][j] == '+') arr[i][j] = 'a';
			}
		}

		for(int i = 0;i < x;++i){
			for(int j = 0;j < y;++j){
				cout<<arr[i][j];
			}
		}
	}
		

	
}
int main() {
	fastio();
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
	freopen("Error.txt", "w", stderr);
#endif
	  pratyaksh_khurana();
	return 0;
}