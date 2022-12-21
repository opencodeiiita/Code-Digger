#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 998244353;
const int N = 2e5;

int pow_(int a, int b) {
    if(b == 0) return 1;
    a = a%mod;
    int k = pow_(a, b/2) % mod;
    k = (k*k)%mod;
    if(b&1){
        return (a%mod * k%mod)%mod;
    }
    return k;
}

int fact(int n,vector<int> &fac){
    if(n == 0)return fac[n] = 1;
    if(fac[n] != -1){
        return fac[n];
    }
    return fac[n] = ((n%mod) * (fact(n-1,fac)%mod))%mod;
}

int nCr(int n, int r, vector<int> &fac){
    if(r < 0) return 0;
    if(r == 0) return 1;
    if(n < r) return 0;
    int k = (n-r)%mod;
    int n1 = fac[n]%mod;
    int nr = (fac[k]%mod * fac[r]%mod)%mod;
    int ans = ((n1%mod) * (pow_(nr, mod-2) % mod))%mod;
    return ans;
}

int32_t main(){
    int n, r; cin>>n>>r;
    vector<int> fac(N+5, -1);
    fact(n,fac);
    cout<<nCr(n, r, fac)<<"\n";
}
