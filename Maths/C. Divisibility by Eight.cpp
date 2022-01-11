//Problem Link - https://codeforces.com/contest/550/problem/C
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
	string s; cin>>s;
	int pos = s.find('8'),pos1 = s.find('0'),res = -1,n = s.size();
	
	if(pos1 != -1){
		cout<<"YES\n0";
	}else if(pos != -1){
		cout<<"YES\n8";
	}else{
		bool flag = 0;

		 for(int i = 0;i < n - 2;i++){
			   for(int j = i + 1;j < n - 1;j++){
				   for(int k = j + 1;k < n;k++){
					   int numm = 100 * (s[i] - '0') + 10 * (s[j] - '0') + 1 * (s[k] - '0');
                       if(numm % 8 == 0){
                           res = numm;
						   flag = 1;
						   break;
                       }
				   }   
				   if(flag){
					   break;
				   }
			   }
			   if(flag){
				   break;
			   }
		   }
		
		   if(flag != 0){
			   cout<<"YES\n"<<res;
		   }else{
			   res = -1;
			   for(int i = 0;i < s.size();i++){
				   for(int j = i + 1;j < s.size();j++){
					   string t;
					   t.pb(s[i]);
					   t.pb(s[j]); 
					   int numm = stoi(t);
					   if(numm % 8 == 0){
						   res = numm;
						   flag = 1;
						   break;
					   }
				   }
				   if(flag){
					   break;
				   }
			   }
			   if(flag != 0){
				   cout<<"YES\n"<<res;
			   }else{
				   cout<<"NO\n";
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