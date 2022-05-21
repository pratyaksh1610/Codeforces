//https://codeforces.com/contest/1462/problem/C
// @author : pratyaksh_khurana
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
 
#define fastio()   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD        1000000007
#define INF        1e18
#define PI          3.1415926 
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
ll a_mod_n(ll a, ll n){return a - n * (int)floor((double)a / n);}
bool is_Power_of_2(ll n){if(n == 0)return 0;return (ceil(log2(n)) == floor(log2(n)));}
ll sum_of_digits(ll n){ll sum = 0;while(n){ll last = n % 10;sum += last;n /= 10;}return sum;}
 
/*******************************************************************************************************************************************************************************************************/
 
void pratyaksh_khurana(){
	ll _; cin>>_;
	while(_--){
		ll x; cin>>x;
		ll sum  =0;
		bool flag =0;
		
		if(x <= 9){
			cout<<x<<endl;
			continue;
		}

		string s;
		for(int i = 9;i >= 0;--i){
		   if(sum == x){
				break;
			}
			if(sum > x){
				flag = 1;
				break;
			}
			sum += i;
			s.pb(i + 48);
		}

		if(sum < x){
			cout<<"-1\n";
		}else{
		  if(flag) s.ppb();
          ll sum1 = sum_of_digits(stoi(s));
		  ll ins = x-sum1;
		  s.pb(ins + 48);
		  sort(all(s));
		  if(s[0] == '0'){
		   sort(all(s),greater<int>());
		   s.ppb();
		   sort(all(s));
		  }
		  cout<<s<<endl;

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