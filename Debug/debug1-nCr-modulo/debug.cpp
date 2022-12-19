#include <bits/stdc++.h>

#define int long long
const int mod = 998244353;
const int N = 2e5;

vector<int> fac(N+5, 1);
 
int pow_(int a, int b) {
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b&1){
        return (a * pow_(a, b-1))%mod;
    }
    int k = pow_(a, b/2);
    return k*k;
}

int fact(int n){
    if(fac[n] != -1){
        return fac[n];
    }
    return fac[n] = n * fact(n+1);
}

int nCr(int n, int r){
    if(r < 0) return 0;
    if(r == 0) return 1;
    if(n > r) return 0;
    int k = n-r;
    int n1 = fac[n]%mod;
    r = fac[r]%mod;
    int nr = fac[k]%mod;
    int ans = ((n1 * pow_(r, mod-1)) % mod) * (pow_(nr, mod-2) % mod);
    return ans;
}

void main(){
    int n, r; cin>>n>>r;
    cout<<nCr(n, r)<<"\n";
}

