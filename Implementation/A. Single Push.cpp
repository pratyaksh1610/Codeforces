//Problem link - https://codeforces.com/contest/1253/problem/A
/* Pratyaksh Khurana */
 
#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second
 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll count_odd_in_a_range(ll L, ll R){ll N = (R - L) / 2;if (R % 2 != 0 || L % 2 != 0)N += 1;return N;}
ll pow(long long a, long long b) {long long res = 1;while (b > 0) {if (b & 1)res = res * a;a = a * a; b >>= 1;}return res;}

/*******************************************************************************************************************************************************************************************************/

void pratyaksh_khurana(){	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n),b(n);
		for(int i = 0;i < n;i++){
			cin>>a[i];
		}
		for(int i = 0;i < n;i++){
			cin>>b[i];
		}
		debug(a)
		debug(b)
		
		if(n == 1){
			if(a[0] <= b[0]){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
			continue;
		}

		if(a == b){
			cout<<"YES\n";
			continue;
		}

		int f = -1,diff = 0;
		for(int i = 0;i < n;i++){
			if(a[i] != b[i]){
				f = i;
				diff = b[i] - a[i];
				break;
			}
		}

		if(diff < 0){
			cout<<"NO\n";
			continue;
		}

		bool flag = 0;
		int s = -1;
		for(int i = n - 1;i >= 0 ;i--){
			if(a[i] != b[i]){
				s = i;
				break;
			}
		}

		if(s == -1){
			cout<<"YES\n";
			continue;
		}

		debug(f)
		debug(s)

		for(int i = f;i <= s;i++){
			if(b[i] - a[i] != diff){
				flag = 1;
				break;
			}
		}
		if(flag){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
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