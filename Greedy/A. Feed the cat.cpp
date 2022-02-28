// Author : Pratyaksh Khurana
//Problem Link - https://codeforces.com/contest/955/problem/A
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
bool ispalindrome(string s){for (int i = 0; i < s.size() / 2; i++) if (s[i] != s[s.size() - i - 1])return 0;return 1;}
/*******************************************************************************************************************************************************************************************************/

void pratyaksh_khurana(){
	double hh,mm; cin>>hh>>mm;
	double h,d,n,c; cin>>h>>d>>c>>n;
	if(hh >= 20){
		//discount		
		c -= (20*c)/100.0;
		debug(c)
		ll x = 0;
		while(1){
			if(h <= 0) break;
			h -= n;
			++x;
		}
		double y = 1.0*x*c;
		cout<<fixed<<setprecision(4)<<y<<endl;
	}else{
		//two cases 
		//either at the same time
		// or he waits and goes at 20:00
		double H = h,D = d,N = n,C = c,y = 0,z = 0;
		ll x = 0;
		while(1){
			if(h <= 0) break;
			h -= n;
			++x;
		}
		y = 1.0*x*c;

		x = 0;
		h = H;
		c -= (20*c)/100.0;
		double mins = 0;
		if(mm == 0){
			mins = abs(20 - hh) * 60.0;
		}else{
			mins = abs(20 - hh) - 1;
			mins = mins * 60.0;
			mins = mins + (60 - mm);
		}
		h = h + (d * mins);

		while(1){
			if(h <= 0) break;
			h -= n;
			++x;
		}
		z = 1.0*x*c;
		cout<<fixed<<setprecision(4)<<min(z,y)<<endl;
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