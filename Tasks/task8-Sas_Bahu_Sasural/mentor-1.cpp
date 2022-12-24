#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e18
#define f first
#define s second
#define pi pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vpi vector<pi>
#define vb vector<bool>
#define vvi vector<vi>
#define vvpi vector<vpi>
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(),a.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repr(i,a,b) for (int i=a;i>=b;i--)
#define endl "\n" //for interactive comment it.
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int _ceil(int a,int b){return (a%b==0?a/b:a/b+1);} 
 
int mod=1e9+7;
int mod_pow(int a,int p){
	int res=1;
	while(p>0){
		if(p&1) res=(res*a);
		p=p>>1; a=(a*a);
	}
	return res;
}
 
int n;
vvi capacity,adj;
 
int bfs(int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, inf});
 
    while (!q.empty()) {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();
 
        for (int next : adj[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }
 
    return 0;
}
int maxflow(int s, int t) {
    int flow = 0;
    vector<int> parent(n);
    int new_flow;
 
    while (new_flow = bfs(s, t, parent)) {
        flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }
 
    return flow;
}
 
void solve(){
	int nn;
	cin>>nn;
	int arr[2][3];
	cin>>arr[0][0]>>arr[0][1]>>arr[0][2];
	cin>>arr[1][0]>>arr[1][1]>>arr[1][2];
 
	int a=0;
	a+=min(arr[0][0],arr[1][1]);
	a+=min(arr[0][1],arr[1][2]);
	a+=min(arr[0][2],arr[1][0]);
 
	n=8;
	adj.resize(n+1);
	capacity.resize(n+1,vi(n+1,0));
 
	adj[0].pb(1); capacity[0][1]=arr[0][0];
	adj[0].pb(2); capacity[0][2]=arr[0][1];
	adj[0].pb(3); capacity[0][3]=arr[0][2];
 
	adj[1].pb(4); capacity[1][4]=min(arr[0][0],arr[1][0]);
	adj[1].pb(6); capacity[1][6]=min(arr[0][0],arr[1][2]);
	
	adj[2].pb(5); capacity[2][5]=min(arr[0][1],arr[1][1]);
	adj[2].pb(4); capacity[2][4]=min(arr[0][1],arr[1][0]);
	
	adj[3].pb(6); capacity[3][6]=min(arr[0][2],arr[1][2]);
	adj[3].pb(5); capacity[3][5]=min(arr[0][2],arr[1][1]);
	
	adj[4].pb(7); capacity[4][7]=inf;
	adj[5].pb(7); capacity[5][7]=inf;
	adj[6].pb(7); capacity[6][7]=inf;
 
	cout<<nn-maxflow(0,7)<<" "<<a<<endl;
}
 
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 
	int t=1;
	// cin>>t;
	rep(i,1,t+1){
		solve();
	}
 
	return 0;
}