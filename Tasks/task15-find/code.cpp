#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define mll map<ll,ll>
#define cinv(v) ll x; cin>>x; v.push_back(x);
#define floop(i,b) for(ll i=0;i<b;i++)
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define sortv(v) sort(v.begin(),v.end())

#define ayk ll t; cin>>t; while(t--)

ll power_prime(ll fact,ll x){
    ll count=0;
    while(fact>0){
        fact/=x;
        count+=fact;
    }

    return count;
}

ll power(ll fact,ll x){
    ll ans=INT_MAX;
    fr(i,2,sqrt(x)+1){
        ll temp=0;
        if(x%i==0){
            temp++;
            x/=i;
        }
        if(temp>0){
            ll pow=power_prime(fact,i)/temp;
            ans=min(ans,pow);
        }
    }

    if(x>=2){
        ll pow=power_prime(fact,x);
        ans=min(ans,pow);
    }

    return ans;
}

int main(){
    ayk{
        ll n,m;
        cin>>n>>m;
        cout<<power(n,m)<<endl;
    }
}