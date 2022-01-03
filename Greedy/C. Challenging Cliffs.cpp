//Problem Link -  https://codeforces.com/contest/1537/problem/C
/*By Pratyaksh Khurana*/
 
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define fir first
#define sec second
 
 
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
 
/**************************************************************************************************************************************/
 
void solve(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n),v1;
		for(int i = 0;i < n;i++){
			cin>>v[i];
		}
		v1 = v;
		sort(all(v1));
		int fir = -1,sec = -1,mn = INT_MAX;
		for(int i = 1;i < n;i++){
			if( abs(v1[i] - v1[i - 1]) < mn){
				mn = abs(v1[i] - v1[i - 1]);
				fir = v1[i - 1];
				sec = v1[i];
			}
		}
		debug(fir)
		debug(sec)
        
		for(int i = 0;i < n;i++){
			if(v1[i] == fir){
				v1[i] = -1;
				break;
			}
		}
	
		for(int i = 0;i < n;i++){
			if(v1[i] == sec){
				v1[i] = -1;
				break;
			}
		}
 
		cout<<fir<<" ";
		for(int i = 0;i < n;i++){
			if(v1[i] >= fir){
				cout<<v1[i]<<" ";
				v1[i] = -1;
			}
		}
		for(int i = 0;i < n;i++){
			if(v1[i] != -1){
				cout<<v1[i]<<" ";
			}
		}
		cout<<sec<<endl;
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