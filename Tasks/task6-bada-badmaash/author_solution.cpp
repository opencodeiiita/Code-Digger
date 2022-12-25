#include <bits/stdc++.h>
using namespace std;
 
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define int long long
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()
#define in(a) for(int i = 0; i<a.size(); i++) cin>>a[i];
#define out(a) for(int i = 0; i<a.size(); i++) cout<<a[i]<<" ";
typedef vector<int> vi;
#define sqrt(x) sqrtl(x)
#define ret(a) cout<<a<<"\n"; return

int dp[4001][11];

const int mod = 998244353;
const int G = 2e6;

vector<int> fac(G+10, 1);
 
int pow_(int a, int b) {
    if(b == 0) return 1;
    if(b&1){
        return (a * pow_(a, b-1))%mod;
    }
    int k = pow_(a, b/2);
    return (k*k)%mod;
}

int fact(int n){
    return fac[n];
}

int ncr(int n, int r){
    if(r < 0) return 0;
    if(r == 0) return 1;
    int k = n-r;
    if(k < 0 ) return 0;
    int n1 = fac[n]%mod;
    r = fac[r]%mod;
    int nr = fac[k]%mod;
    int ans = ((n1 * pow_(r, mod-2))% mod) * ((pow_(nr, mod-2) % mod) % mod);
    ans%=mod;
    return ans;
}

void facalc(){
    rep(i,2,G+10){
        fac[i] = i*fac[i-1];
        fac[i]%=mod;
    }
}


void solve(){
    facalc();

    int N = 4000;
    int total = 2e6;
    vi a(N);
    in(a);
    memset(dp, 0, sizeof dp);
    rep(i,0,11){
        dp[0][i] = ncr(10, i); 
        int num =  ncr(total - 10, a[0] - i); 
        int denominator = ncr(total, a[0]);
        denominator = pow_(denominator, mod-2);
        dp[0][i] *= num;
        dp[0][i] %= mod;
        dp[0][i] *= denominator;
        dp[0][i] %= mod;
    }

    total -= a[0];

    for(int i = 1; i < N; i++){
        rep(j,0,11){
            rep(k,0,11){
                if(k > j) continue;
                int l = dp[i-1][k];
                int num = ncr(10 - k, j - k);
                int num2 = ncr(total - 10 + k, a[i] - j + k);
                int deno = ncr(total, a[i]);
                deno = pow_(deno, mod-2);
                l *= num;
                l %= mod;
                l *= num2;
                l %= mod;
                l *= deno;
                l %= mod;
                dp[i][j] += l;
                dp[i][j] %= mod;
            }
        }
        total -= a[i];
    }

    for(int i = 0; i < N; i++){
        int exp = 0;
        for(int j = 0; j <= 10; j++){
            exp += dp[i][j]*j;
            exp %= mod;
        }
        cout<<exp<<"\n";
    }
}

int32_t main() {    
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
    int t = 1; 
    // cin>>t;
    for(int i = 1; i<=t; i++){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-6 << "ms\n"; 
    return 0;
}
