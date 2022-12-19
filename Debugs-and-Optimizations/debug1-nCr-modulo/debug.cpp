#include <bits/stdc++.h>
using namespace std;

const long long int mod =1e9+7;
const long long int N = 2e5; 

vector<long long int> fac(N+5);
 
int pow_(long long int a, long long int b) {
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b&1){
    	long long int t = a * pow_(a, b-1);
        return (t)%mod;
    }
    long long int k = pow_(a, b/2);
    long long r = k*k;
    return r%mod;
}

int fact(long long int n){
    if(n == 0){
        return 1;
    }
    long long int z = (n * fact(n-1))%mod;
    return z ;
    
}

int nCr( long long int n, long long int r){
    if(r < 0) return 0;
    if(r == 0) return 1;
    if(n < r) return 0;
    int k = n-r;
    long long int n1 = fact(n)%mod;
    r = fact(r)%mod;
    long long int nr = fact(k)%mod;
    long long w = n1 * pow_(r, mod-2); long long u = pow_(nr, mod-2);
    long long int ans1 = (w % mod) * (u % mod);
    long long int ans = (ans1 %mod ) ;
    return ans;
}

int main(){
     long long int n, r; cin>>n>>r;
     
     cout<<nCr(n,r)<<"\n";

	

}



//first merge hahaha