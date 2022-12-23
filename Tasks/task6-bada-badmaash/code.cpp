

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,x,y) for(int i=x;i<y;++i)
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define si set<int>
#define spii set<pair<int,int>>
#define uniq(v)  (v).erase(unique(all(v)),(v).end())
#define mii map<int,int>
#define msi map<string,int>
#define all(x) x.begin(),x.end()
#define kick cout<<"Case #"<<tc<<": "; 

int p = 998244353;
int power(long long x, unsigned int y)
{
    int res = 1;
 
    x = x % p;
  
    if (x == 0) return 0;
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}



void solve(int tc){
	int n = 2*1e6;
	int q = 4000;
	int k = 10;
	int done=0;

	vi pre1(k+1);
	pre1[0] = 1;
	int yo = k;
	rep(i,1,k+1){
		pre1[i] = (pre1[i-1]*yo)%p;
		pre1[i] = (pre1[i]*power(i,p-2))%p;
		yo--;
	}

	vi pre2(n-k+1);
	pre2[0] = 1;
	int yo2 = n-k;
	rep(i,1,n-k+1){
		pre2[i] = (pre2[i-1]*yo2)%p;
		pre2[i] = (pre2[i]*power(i,p-2))%p;
		yo2--;
	}

	vi pre3(n+1);
	pre3[0] = 1;
	int yo3 = n;
	rep(i,1,n+1){
		pre3[i] = (pre3[i-1]*yo3)%p;
		pre3[i] = (pre3[i]*power(i,p-2))%p;
		yo3--;
	}

	while(q--){
		int hi; cin>>hi;
		done+=hi;
		int frnd=1;
		int ans=0;
		while(done>n-k+frnd) frnd++;
		while(frnd<=k && frnd<=done){
			int ff = (pre1[frnd])%p;
			ff = (ff*pre2[done-frnd])%p;
			ff = (ff*frnd)%p;
			ans = (ans+ff)%p;
			frnd++;
		}
		ans = (ans*power(pre3[done],p-2))%p;

		cout<<ans<<"\n";
	}
}

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t=1; 
	// cin>>t;
	for(int tc =1; tc<=t; ++tc){
		solve(tc);

	}
	return 0;
}