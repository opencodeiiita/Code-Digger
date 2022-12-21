#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define db cout<<"Here"<<endl

const int mod=1e9+7;

void dfs(vector <int> g[], int vertex, bool vis[]){
    vis[vertex]=true;
    for(int child : g[vertex]){
        if(vis[child]==true)    continue;
        dfs(g, child, vis);
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;cin>>T;
    while(T--){
	    int n;
	    cin>>n;
	    int a[n+1];
	    int pref[n+1];
	    for(int i=1;i<=n;i++){
	        cin>>a[i];
	        pref[i]=a[i]+i;
	    }
	    if(n==1){
	        cout<<"YES"<<endl;
	        continue;
	    }
	    vector <int> g[n+1];
	    for(int i=1;i<=n;i++){
	        int v1 = i;
	        int v2 = pref[i];
	        if(v1>0 && v1<=n && v2>0 && v2<=n){
	            g[v1].pb(v2);
	            g[v2].pb(v1);
	        }
	    }
	    for(int i=2;i<=n;i++){
	        g[i].pb(i-1);
	    }
	    bool vis[n+1]={0};
	    dfs(g, 1, vis);
	    if(vis[n])
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
    }
    return 0;
}