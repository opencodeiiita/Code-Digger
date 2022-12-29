#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()
const ll mod = 1e9+7; 
const ll N=1e7+5;
const ll k=1e2+5;

ll primes[N];
ll arr[N];
void solve()
{
	ll n; cin>>n;
    if(arr[n]==INT_MAX) arr[n]=1;
    cout<<arr[n]<<endl;
}



int main()
{
  cin.tie(0); 
  cout.tie(0); 
  ios_base::sync_with_stdio(0);
  primes[0]=1;
  primes[1]=1;
  vector<ll>vprime;

  for(ll i=2; i<N; i++)
  {
    if(primes[i]==0)
    {
        vprime.push_back(i);
        for(ll j=i; j<N; j+=i)
        {
            primes[j]=i;
        }
    }
  }
  rep(i,0,N) arr[i]=INT_MAX;
  arr[0]=1; arr[1]=1;
  reverse(vprime.begin(),vprime.end());
  //rep(i,0,100) cout<<vprime[i]<<endl;
  for(ll i=0; i<vprime.size(); i++)
  {
     ll mini=1;
     for(ll j=vprime[i]; j<N; j+=vprime[i])
     {
        arr[j]=min(arr[j],mini);
        arr[j]=min(arr[j-vprime[i]]+1,arr[j]);
        mini++;
     }
  }
  int t; cin>>t;
  while(t--)
  {
    solve();
  }
}