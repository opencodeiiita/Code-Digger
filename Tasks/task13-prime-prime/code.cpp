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

const int s=1e7;
vb p(s+5);

void seive(){
   p[0]=true;
   p[1]=true;
   for(ll i=2 ; i*i<=s ; i++){
      if(!p[i]){
         ll j=i*i;
         while(j<=s){
            p[j]=true;
            j+=i;
         }
      }
   }
}
 
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   seive();
   for(int i=2 ; i<s ; i++){
   	if(p[i]) continue;
   	string str = to_string(i);
      ll temp=0;
      for(int k=0 ; k<str.length() ; k++){
      	temp+=(str[k]-'0');
      }
      if(!p[temp]){ 
      	cout<<i<<"\n";
      }
   }
   return 0;
}