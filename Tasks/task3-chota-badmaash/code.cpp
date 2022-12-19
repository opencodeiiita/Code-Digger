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
// #define mod 1000000007
#define mod 998244353

ll Modulo_exp(ll a,ll b){
   if(b==0)
      return 1;
   ll res=Modulo_exp(a,b/2);
   if(b%2)
      return (((res%mod)*(res%mod)%mod)*(a%mod))%mod;
   else
      return ((res%mod)*(res%mod))%mod;
}

ll Inverse(ll a){
   return Modulo_exp(a,mod-2);
}

ll nck(ll n,ll k){
	if(k>(n-k)) k=n-k;
	ll ans=1;
	while(k){
		ans=(ans*n)%mod;
		ans=(ans*Inverse(k))%mod;
		n--;
		k--;
	}
	return ans;
}

void solve(){
	ll n=2*1e5;
	ll k=10;
	int q=1000;
	ll sel=0;

	vll precomp(n-k+1);
	precomp[0]=1;
	ll tempcur=n-k;
	for(ll i=1 ; i<=(n-k) ; i++){
		precomp[i]=(precomp[i-1]*tempcur)%mod;
		precomp[i]=(precomp[i]*Inverse(i))%mod;
		tempcur--;
	}
	debug(precomp[1])
	debug(precomp[n-k])

	while(q--){
		ll temp;
		cin>>temp;
		sel+=temp;
		ll ans=0;
		ll cur=1;
		while(cur<=sel && cur<=k){
			if((sel-cur)>(n-k)) cur++;
			ll temp_ans=nck(k,cur);
			temp_ans=(temp_ans*precomp[sel-cur])%mod;
			temp_ans=(temp_ans*cur)%mod;
			ans=(ans+temp_ans)%mod;
			cur++;
		}
		temp=nck(n,sel);
		ans=(ans*Inverse(temp))%mod;
		cout<<ans<<"\n";
	}
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