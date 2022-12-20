
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

void solve(int tc){
	int n; cin>>n;
	vi a(n);
	rep(i,0,n) cin>>a[i];
	map<int,bool> m;
	m[0]=true;
	vector<bool> vis(n);
	vis[0] = true;
	while(m.size()>0){
		map<int,bool> m1;
		for(auto &i : m){
			int l = i.first; int r = i.second;
			if(l-1>=0 && !vis[l-1]){
				m1[l-1]=true;
				vis[l-1] = true;
			}
			if(l+a[l]<n && !vis[l+a[l]]){
				m1[l+a[l]]=true;
				vis[l+a[l]] = true;
			}
			if(vis[n-1]){
			break;
		}
		}
		if(vis[n-1]){
			break;
		}
		m = m1;
	}
	if(vis[n-1]){
		cout<<"YES\n";
	}
	else cout<<"NO\n";

}

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t=1; 
	cin>>t;
	for(int tc =1; tc<=t; ++tc){
		solve(tc);

	}
	return 0;
}