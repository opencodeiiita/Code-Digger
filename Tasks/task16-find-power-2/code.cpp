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

ll maxPrimeFactor(ll n){
   ll maxPrime = -1;
 
   while (n % 2 == 0) {
      maxPrime = 2;
      n/=2;
   }

   while (n % 3 == 0) {
      maxPrime = 3;
      n/=3;
   }
 
   for (ll i = 5; i <= sqrt(n); i += 6) {
      while (n % i == 0) {
         maxPrime = i;
         n/=i;
      }
      while (n % (i+2) == 0) {
         maxPrime = i+2;
         n=n/(i+2);
      }
   }
 
   if (n>4)
      maxPrime = n;
 
   return maxPrime;
}

void solve(){
   ll n,m;
   cin>>n>>m;
   ll ct=0;
   m=maxPrimeFactor(m);
   ct+=(n/m);
   ll cur=m*m;
   ll round=1;
   while(cur<=n){
   	ct+=round;
   	round++;
   	cur*=m;
   }
   cout<<ct<<"\n";
}
 
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}