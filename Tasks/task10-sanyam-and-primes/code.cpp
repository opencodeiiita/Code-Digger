#include<bits/stdc++.h>
using namespace std;
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
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

const int N=1e7;
// vector<vi> factors(N);
vi spf(N);

void seive(){
	// for(int i=2 ; i<N ; i++){
	// 	spf[i]=i;
	// }
	spf[2]=2;
	for(int i=4 ; i<N ; i+=2){
		spf[i]=2;
	}
   for(int i=3 ; i*i<N ; i++){
      if(spf[i]==0){
      	spf[i]=i;
         ll j=i*i;
         while(j<N){
            if(spf[j]==0) spf[j]=i;
            j+=i;
         }
      }
   }
}



vi dp(N);

vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
    	if(spf[x]==0) spf[x]=x;
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

void finale(){
   for(ll i=2 ; i<N ; i++){
   	if(dp[i]==0)
      	dp[i]=1;
      vi temp=getFactorization(i);
      for(int j=0 ; j<temp.size() ; j++){
      	int temp2 = i+temp[j];
      	if(temp2>N) continue;
      	if(dp[temp2]==0) dp[temp2]=dp[i]+1;
      	else dp[temp2]=min(dp[temp2],dp[i]+1);
      }
   }
}

void solve(){
   int n;
   cin>>n;
   cout<<dp[n]<<"\n";
}
 
int main(){
	auto begin = std::chrono::high_resolution_clock::now();
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   #ifndef ONLINE_JUDGE
      freopen("Error.txt", "w", stderr);
   #endif

   seive();
   finale();
   // debug(factors[353603])
   int t;
   t=2e5;
   while(t--){
      solve();
   }
   auto end = std::chrono::high_resolution_clock::now();
   auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
   cerr << "Time measured: " << elapsed.count() * 1e-6 << "ms\n";
   return 0;
}