#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<bool> vb;
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define mod 1000000007
#define mod1 998244353

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
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

bool cmpy(pair<ll,ll> a,pair<ll,ll> b){
	if(a.ss!=b.ss) return a.ss<b.ss;
	return a.ff<b.ff;
}

bool cmpx(pair<ll,ll> a,pair<ll,ll> b){
	if(a.ff!=b.ff) return a.ff<b.ff;
	return a.ss<b.ss;
}

void solve(){
	int n,m;
	cin>>n>>m;
	vector <pair<ll,ll>> boys(n);
	vector <pair<ll,ll>> girls(m);
	pair <ll,ll> moved = {0,0};
	ll rightboy=0;
	ll upboy=0;
	for(int i=0 ; i<n ; i++){
		cin>>boys[i].ff>>boys[i].ss;
		if(boys[i].ff>rightboy) rightboy=boys[i].ff;
		if(boys[i].ss>upboy) upboy=boys[i].ss;
	}
	ll leftgirl=1e6+5;
	ll downgirl=1e6+5;
	for(int i=0 ; i<m ; i++){
		cin>>girls[i].ff>>girls[i].ss;
		if(girls[i].ff<leftgirl) leftgirl=girls[i].ff;
		if(girls[i].ss<downgirl) downgirl=girls[i].ss;
	}
	ll ans=rightboy-leftgirl;
	if(upboy>=downgirl) ans++;
	ll temp=upboy-downgirl;
	if(rightboy>=leftgirl) temp++;
	if(temp<ans) ans=temp;

	sort(all(girls),cmpx);
	sort(all(boys),cmpy);
	ll moves=0;
	int cur=m;
	while(cur>=0){
		int ind=-1;
		ll curg=1e6+5;
		for(int i=0 ; i<cur ; i++){
			if(girls[i].ss<curg && girls[i].ff<girls[cur].ff){
				ind=i;
				curg=girls[i].ss;
			}
		}
		if(ind==-1) break;
		if(girls[ind].ff>(rightboy+moved.ff)){
			cur=ind;
			continue;
		}
		ll moves2=moves;
		int indb=-1;
		for(int i=n-1 ; i>=0 ; i--){
			if((boys[i].ff+moved.ff)>leftgirl){
				indb=i;
				break;
			}
		}
		moves2+=(boys[indb].ss-girls[ind].ss+1);
		if(moves2<ans) ans=moves2;
		moves+=(rightboy-girls[ind].ff+1);
		moved.ff-=(rightboy-girls[ind].ff+1);
		cur=ind;
	}

	cout<<ans;
}
 
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
      freopen("Error.txt", "w", stderr);
   #endif

   solve();
   return 0;
}