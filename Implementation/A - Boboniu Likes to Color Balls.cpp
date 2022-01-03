//Problem Link -  https://codeforces.com/contest/1395/problem/A
/*By Pratyaksh Khurana*/

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
/*******************************************************************************************************************************************************************************************************/

void solve(){
	int t; cin>>t;
	while(t--){
		vector<ll>v(4);
		ll odd = 0,even = 0;
		for(int i = 0;i < 4;i++){
			cin>>v[i];
		}
		for(int i = 0;i < v.size();i++){
			if(v[i] % 2 == 0){
				even++;
			}else if(v[i] % 2 != 0){
				odd++;
			}
		}

		if(odd <= 1){
			cout<<"Yes\n";
		}else{
			int mn = min({v[0],v[1],v[2]});
			if(mn == 0){
				cout<<"No\n";
				continue;
			}
			v[0] -= 1;
			v[1] -= 1;
			v[2] -= 1;
			v[3] += 3;
			odd = 0,even = 0;
			for(int i = 0;i < v.size();i++){
			if(v[i] % 2 == 0){
				even++;
			}else if(v[i] % 2 != 0){
				odd++;
			}
		}
		
		if(odd <= 1){
			cout<<"Yes\n";
		}
		else{
		   cout<<"No\n";	
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