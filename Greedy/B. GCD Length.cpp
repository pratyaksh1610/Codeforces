//Problem Link - https://codeforces.com/contest/1511/problem/B
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

/*******************************************************************************************************************************************************************************************************/

void solve(){	
	int t; cin>>t;
	while(t--){
		int a,b,c; cin>>a>>b>>c;
		if(a == 1 && b == 1 && c == 1){
			cout<<"1 1\n";
		}else{
			if(c == 1){
				if(a == b){
				  cout<<(int)(pow(10,a - 1) + 0.5)<<" "<<(int)(pow(10,a - 1) + 0.5) + 1<<endl;
				}else if(a < b){
				  cout<<(int)(pow(10,a - 1) + 0.5)<<" "<<(int)(pow(10,b - 1) + 0.5) + 1<<endl;
				}else{
				  cout<<(int)(pow(10,a - 1) + 0.5) + 1<<" "<<(int)(pow(10,b - 1) + 0.5)<<endl;
				}
			}else{
				if(min(a,b) == c){
					cout<<"1";
					for(int i = 1;i < a;i++){
						cout<<"0";
					}
					cout<<" 1";
					for(int i = 1;i < b;i++){
						cout<<"0";
					}
					cout<<endl;
				}else{
					if(a < b){
						cout<<(int)(pow(10,a - 1) + 0.5)<<" "<<(int)(pow(10,b - 1) + 0.5) + (int)(pow(10,c - 1) + 0.5)<<endl;
					}else{
						cout<<(int)(pow(10,a - 1) + 0.5) + (int)(pow(10,c - 1) + 0.5)<<" "<<(int)(pow(10,b - 1) + 0.5)<<endl;
					}
				}
 
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
	  solve();
	return 0;
}